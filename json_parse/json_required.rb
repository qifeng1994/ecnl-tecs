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
                functionName = val2['propertyName']['en']
                if val2['data']['$ref'] then
                ref = val2['data']['$ref'].sub( /#\/definitions\//, "" )
                val3 = Definitions[ref]
                parse_definitions(val3,functionName,className)
                elsif val2['data']['type'] == 'state' then
                val3 = val2['data']
                parse_definitions(val3,functionName,className)
                else
                end
            else
            end
        end
    }
end

def parse_definitions(val,functionName,className)
    
        if val['type'] == 'state' then
            size = val['size']
            type = property_data_type(size)
            name = font_change(functionName)
            print_function_state("  ",size,type,name,val,className)
        else
            # print_function
        end
    
end

def property_data_type (size)
    if size == 1 then
        return 'unint8_t'
    elsif size == 2 then
        return 'unint16_t'
    elsif size == 4 then
        return 'unint32_t'
    end
end

def print_function_state(indent,size,type,name,val,className)
    print("void #{name}_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)\n{\n
    if(size! = #{size})
    #{indent}return 0;
    *anno = *((#{type}*)item->exinf) != *((#{type}*)src);
    switch (*(#{type}*)src) {\n")
    print_state_type(indent + "    ", val,className)
    print("default:
        return 0;\n}\n")
end

def print_state_type (indent,val,className)
    val['enum'].each{ |edt|
        print("#{indent}case #{edt['edt']}: e#{className}_Set#{edt['state']['en']}( )
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