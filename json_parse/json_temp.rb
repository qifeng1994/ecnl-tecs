# coding: utf-8
#
# EL_DeviceDescription_3_1_6r5.json (http://sh-center.org/sdk の中ほどに所在)
# をパースし、デバイスやプロパティの一覧を出力
#

require "json"

def print_properties(val,indent="  ")
    val.each{ |prop_id, val2|
        if val2['oneOf'] then
            val2['oneOf'].each { |val3|
                print("int #{val3['propertyName']['en']}_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)\n{\n
    if(size! = )
    #{indent}return 0;
    *anno = *(( *)item->exinf) != *(( *)src);
    switch (*( *)src) {
    case :
    #{indent}break;
    case :
    #{indent}break;
    default:
    #{indent}return 0;
}\n")
            }
        else
        print( "int #{val2['propertyName']['en']}_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)\n{\n}\n" )
    end
    }
end

def print_state_type indent, val
    val['enum'].each{ |edt|
        print "#{indent}#{edt['state']['en']} = #{edt['edt']}\n"
    }
end

def print_number_type indent, val
    print( "#{indent}type=#{val['format']} min=#{val['minimum']} max=#{val['maximum']}\n" )
end

def property_size (num)
    case num
    when 1
        uint8_t
    else 2
        uint16_t
    end
end
# Echonet Lite Device Description in JSON
devdesc_json_fname = "appendix_v3-1-6r5/EL_DeviceDescription_3_1_6r5.json"

# Read Device Description (String)
devdesc_json = File.read(devdesc_json_fname)

# Convert JSON String to Hash
DevDesc = JSON[devdesc_json]
Devices = DevDesc["devices"]
Definitions = DevDesc["definitions"]

Devices.each{ |id,val|
    if val['className'] == nil then
        print "*** #{id} has no class name ***\n"
    elsif val['className']['en'] =='General lighting'then
        print_properties( val['elProperties'] )
    end
}