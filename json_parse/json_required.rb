require "json"
# Echonet Lite Device Description in JSON
devdesc_json_fname = "appendix_v3-1-6r5/EL_DeviceDescription_3_1_6r5.json"

# Read Device Description (String)
devdesc_json = File.read(devdesc_json_fname)

# Convert JSON String to Hash
DevDesc = JSON[devdesc_json]
Devices = DevDesc["devices"]
Definitions = DevDesc["definitions"]

def parse_properties (val,className)
    val.each{ |prop_id,val2|
        if val2['oneOf'] then
            
        else
            if val2['accessRule']['set'] == 'required' then
                propertyName = val2['propertyName']['en']
                if val2['data']['$ref'] then
                ref = val2['data']['$ref'].sub( /#\/definitions\//, "" )
                val3 = Definitions[ref]
                parse_definitions(val3,propertyName,className)
                elsif val2['data']['type'] == 'state' then
                val3 = val2['data']
                parse_definitions(val3,propertyName,className)
                elsif val2['data']['oneOf'] then
                val2['data']['oneOf'].each{ |val3|
                    if val3['$ref'] then
                    ref = val3['$ref'].sub( /#\/definitions\//, "" )
                    val4 = Definitions[ref]
                    parse_definitions(val4,propertyName,className)
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

def parse_definitions(val,propertyName,className)
        if val['type'] == 'number' then
            type = val['format']
            propertyName = font_change(propertyName)
            size = property_format_size(type)
            min = val['minimum']
            max = val['maximum']
            print_function_number("  ",size,type,propertyName,className,min,max)
        elsif val['type'] == 'state' then
            size = val['size']
            type = property_data_type(size)
            propertyName = font_change(propertyName)
            print_function_state("  ",size,type,propertyName,val,className)
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

def print_function_state(indent,size,type,propertyName,val,className)
    print("void #{propertyName}_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)\n{\n
    if(size! = #{size})
    #{indent}return 0;
    *anno = *((#{type}*)item->exinf) != *((#{type}*)src);
    switch (*(#{type}*)src) {\n")
    print_state_type(indent + "    ", val,className)
    print("default:
        return 0;\n}\n")
end

def print_function_number(indent,size,type,propertyName,className,min,max)
    print("void #{propertyName}_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)\n{\n
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

def print_state_type (indent,val,className)
    val['enum'].each{ |edt|
        print("#{indent}case #{edt['edt']}: c#{className}_Set#{edt['state']['en']}( )
        break;\n")
    }
end

def font_change(name)
    return name.split(/ |\_|\-/).map(&:capitalize).join(" ").gsub(/\s+/, '')
end

Devices.each{ |id, val|
    if val['oneOf'] then
        # print( "#{id} oneOf\n" )
        val['oneOf'].each{|val2|
            # print( "  #{val2['className']['en']}\n" )
            className = font_change(val2['className']['en'])
            parse_properties(val2['elProperties'],className)

        }
    elsif val['className'] == nil then
        #print "*** #{id} has no class name ***\n"
    elsif val['className']['en'] then
        className = font_change(val['className']['en'])
        parse_properties(val['elProperties'],className)
        #print( "#{val['className']['en']} = #{id}\n" )
        #print_properties( val['elProperties'] )
    elsif val['className']['ja'] then
        #print( "#{val['className']['ja']} = #{id}\n" )
        #print_properties( val['elProperties'] )
    else
        #print "### #{id} has class name but has neither 'ja' nor 'en' ***\n"
    end
}

# propertyName[0].downcase+className[1..-1] 首字母小写
