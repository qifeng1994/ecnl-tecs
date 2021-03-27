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
            ref = val3['data']['$ref'].sub( /#\/definitions\//, "" )
            val4 = Definitions[ref]
            size = val4['size']
            type = property_data_type(size)
            print_function("  ",size,type,val3,val4)
            }
        else
            print("int #{val2['propertyName']['en']}_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)\n")
            # if val2['data'] && val2['data']['$ref'] then
            #     ref = val2['data']['$ref'].sub( /#\/definitions\//, "" )
            #     val3 = Definitions[ref]
            #     size = val3['size']
            #     type = property_data_type(size)
            #     print_function("  ",size,type,val2,val3)
            # else
            #     print ("#{indent}  data or ref not defined\n")
            # end
    end
    }
end

def print_state_type indent, val
    val['enum'].each{ |edt|
        # print "#{indent}#{edt['state']['en']} = #{edt['edt']}\n"
        print("#{indent}case #{edt['edt']}: (#{edt['state']['en']})
        break;\n")
    }
end

def print_number_type indent, val
    print( "#{indent}type=#{val['format']} min=#{val['minimum']} max=#{val['maximum']}\n" )
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

def print_function (indent,size,type,val,val2)
    print("int #{val['propertyName']['en']}_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)\n{\n
    if(size! = #{size})
    #{indent}return 0;
    *anno = *((#{type}*)item->exinf) != *((#{type}*)src);
    switch (*(#{type}*)src) {\n")
    print_state_type(indent + "    ", val2)
    print("default:
        return 0;\n}\n")
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