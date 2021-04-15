# signatureを生成するため
require "json"
require 'fileutils'
# Echonet Lite Device Description in JSON
devdesc_json_fname = "appendix_v3-1-6r5/EL_DeviceDescription_3_1_6r5.json"

# Read Device Description (String)
devdesc_json = File.read(devdesc_json_fname)

# Convert JSON String to Hash
DevDesc = JSON[devdesc_json]
Devices = DevDesc["devices"]
Definitions = DevDesc["definitions"]

def parse_properties (val,fileName)
    val.each{ |prop_id,val2|
        if val2['oneOf'] then

        else
            #if val2['accessRule']['set'] == 'required' then
                propertyName = val2['propertyName']['en']
                if val2['data']['$ref'] then
                ref = val2['data']['$ref'].sub( /#\/definitions\//, "" )
                val3 = Definitions[ref]
                parse_definitions(val3,propertyName,fileName)
                elsif val2['data']['type'] == 'state' then
                val3 = val2['data']
                parse_definitions(val3,propertyName,fileName)
                elsif val2['data']['oneOf'] then
                val2['data']['oneOf'].each{ |val3|
                    if val3['$ref'] then
                    ref = val3['$ref'].sub( /#\/definitions\//, "" )
                    val4 = Definitions[ref]
                    parse_definitions(val4,propertyName,fileName)
                    else
                    end
                }
                else
                end
            #else
            #end
        end
    }
end

def parse_definitions(val,propertyName,fileName)
        if val['type'] == 'number' then
            type = val['format']
            propertyName = font_change(propertyName)
            size = property_format_size(type)
            min = val['minimum']
            max = val['maximum']
            print_signature_number("    ",propertyName,fileName)
        elsif val['type'] == 'state' then
            size = val['size']
            type = property_data_type(size)
            propertyName = font_change(propertyName)
            print_signature_state("    ",val,fileName)
        else
        end
    
end

def print_signature_state(indent,val,fileName)
    val['enum'].each{ |edt|
        fileName.print("#{indent}void set#{edt['state']['en']}( );\n")
    }

end

def print_signature_number(indent,propertyName,fileName)
    fileName.print("#{indent}set#{propertyName}( );\n")
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

def font_change(name)
    return name.split(/ |\_|\-/).map(&:capitalize).join(" ").gsub(/\s+/, '')
end

if true then
Dir.mkdir("gen")
Devices.each{ |id, val|
    if val['oneOf'] then
        val['oneOf'].each{|val2|
            className = font_change(val2['className']['en'])
            cdl = File.open("gen/t#{className}.cdl","w+")
            cdl.print("signature s#{className} {\n")
            parse_properties(val2['elProperties'],cdl)
            cdl.print("};\n")
            cdl.close
        }
    elsif val['className'] == nil then
        #print "*** #{id} has no class name ***\n"
    elsif val['className']['en'] then
        className = font_change(val['className']['en'])
        cdl = File.open("gen/t#{className}.cdl","w+")
        cdl.print("signature s#{className} {\n")
        parse_properties(val['elProperties'],cdl)
        cdl.print("};\n")
        cdl.close
        #print( "#{val['className']['en']} = #{id}\n" )
    elsif val['className']['ja'] then
        #print( "#{val['className']['ja']} = #{id}\n" )
    else
        #print "### #{id} has class name but has neither 'ja' nor 'en' ***\n"
    end
}

else
FileUtils.rm_r ("gen")
end


# if true then
# Dir.mkdir("gen")
# cdl = File.open("gen/demo.cdl","w+")
# cdl.puts("hello world")
# cdl.close
# else
# FileUtils.rm_r ("gen")
# end