#　アプリケーション.cを生成するため
require "json"
require "fileutils"
# Echonet Lite Device Description in JSON
devdesc_json_fname = "appendix_v3-1-6r5/EL_DeviceDescription_3_1_6r5.json"

# Read Device Description (String)
devdesc_json = File.read(devdesc_json_fname)

# Convert JSON String to Hash
DevDesc = JSON[devdesc_json]
Devices = DevDesc["devices"]
Definitions = DevDesc["definitions"]

def parse_properties (val,className,fileName)
    val.each{ |prop_id,val2|
        if val2['oneOf'] then
            
        else
            if val2['accessRule']['set'] == 'required' then
                propertyName = val2['propertyName']['en']
                if val2['data']['$ref'] then
                ref = val2['data']['$ref'].sub( /#\/definitions\//, "" )
                val3 = Definitions[ref]
                parse_definitions(val3,propertyName,className,fileName)
                elsif val2['data']['type'] == 'state' then
                val3 = val2['data']
                parse_definitions(val3,propertyName,className,fileName)
                elsif val2['data']['oneOf'] then
                val2['data']['oneOf'].each{ |val3|
                    if val3['$ref'] then
                    ref = val3['$ref'].sub( /#\/definitions\//, "" )
                    val4 = Definitions[ref]
                    parse_definitions(val4,propertyName,className,fileName)
                    else
                    end
                }
                else
                end
            else
            end
        end
    }
end

def parse_definitions(val,propertyName,className,fileName)
        if val['type'] == 'number' then
            type = val['format']
            propertyName = font_change(propertyName)
            size = property_format_size(type)
            min = val['minimum']
            max = val['maximum']
            print_function_number("  ",size,type,propertyName,className,min,max,fileName)
        elsif val['type'] == 'state' then
            size = val['size']
            type = property_data_type(size)
            propertyName = font_name(propertyName)
            print_function_state("  ",size,type,propertyName,val,className,fileName)
        else
        end
    
end

def property_data_type (size)
    if size == 1 then
        return 'uint8_t'
    elsif size == 2 then
        return 'uint16_t'
    elsif size == 4 then
        return 'uint32_t'
    end
end

def property_format_size (type)
    if type == 'uint8'
        return 1
    elsif type == 'uint16'
        return 2
    elsif type == 'uint32'
        return 4
    end
end

def print_function_state(indent,size,type,propertyName,val,className,fileName)
    fileName.print("void #{propertyName}_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)\n{\n
    if(size! = #{size})
    #{indent}return 0;
    *anno = *((#{type}*)item->exinf) != *((#{type}*)src);
    switch (*(#{type}*)src) {\n")
    print_state_type(indent + "    ", val,className,fileName)
    fileName.print("default:
        return 0;\n}\n")
end

def print_function_number(indent,size,type,propertyName,className,min,max,fileName)
    fileName.print("void #{propertyName[0].downcase+propertyName[1..-1]}_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)\n{\n
    if(size! = #{size})
    #{indent}return 0;
    if((*(#{type}_t*)src >= #{min}) && (*(#{type}_t*)src <= #{max})){
        *((#{type}_t*)item->exinf) != *((#{type}_t*)src);
        c#{className}_Set#{propertyName}( );
    }
    else{
        return 0;
    }
    return 1;\n"
    )
end

def print_state_type (indent,val,className,fileName)
    val['enum'].each{ |edt|
        stateName = font_change(edt['state']['en'])
        fileName.print("#{indent}case #{edt['edt']}: c#{className}_set#{stateName}( )
        break;\n")
    }
end

def font_change(name)
    # return name.split(/ |\_|\-/).map(&:capitalize).join(" ").gsub(/\s+/, '')
    return name.gsub("/"," ").split(/ |\_|\-/).map(&:capitalize).join(" ").gsub(/\s+/, '')
end

def font_name(name)
    return name.downcase.gsub(/\s+/,'_')
end

def file_output(val)
    className = font_change(val['className']['en'])
    FileUtils.mkdir_p("lib/#{className}/src") # 建立多重路径
    app = File.open("lib/#{className}/src/echonet_main.c","w+")
    parse_properties(val['elProperties'],className,app)
    app.close
end

# Dir.mkdir("src")
Devices.each{ |id, val|
    if val['oneOf'] then
        # print( "#{id} oneOf\n" )
        val['oneOf'].each{|val2|
            # print( "  #{val2['className']['en']}\n" )
            file_output(val2)

        }
    elsif val['className'] == nil then
        #print "*** #{id} has no class name ***\n"
    elsif val['className']['en'] then
        file_output(val)        
        #print( "#{val['className']['en']} = #{id}\n" )
        #print_properties( val['elProperties'] )
    elsif val['className']['ja'] then
        #print( "#{val['className']['ja']} = #{id}\n" )
        #print_properties( val['elProperties'] )
    else
        #print "### #{id} has class name but has neither 'ja' nor 'en' ***\n"
    end
}

# propertyName[0].downcase+propertyName[1..-1] 首字母小写
