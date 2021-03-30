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
            state = get_state(val4)
            # type = property_data_type(size)
            print_function("  ",size,val3,state)
            }
        else
            print("e#{val2['propertyName']['en']}_(int size, int edt)\n{\n}\n")
    end
    }
end

# def print_state_type indent, val
#     val['enum'].each{ |edt|
#         # print "#{indent}#{edt['state']['en']} = #{edt['edt']}\n"
#         print("#{indent}case #{edt['edt']}: (#{edt['state']['en']})
#         break;\n")
#     }
# end

# def print_number_type indent, val
#     print( "#{indent}type=#{val['format']} min=#{val['minimum']} max=#{val['maximum']}\n" )
# end

# def property_data_type (size)
#     if size == 1 then
#         return 'unint8_t'
#     elsif size == 2 then
#         return 'unint16_t'
#     elsif size == 4 then
#         return 'unint32_t'
#     end
# end
def get_state (val4)
    val4['enum'].each{ |edt|
        return state = edt['state']['en']
    }
end

def print_function (indent,size,val,state)
    print("eECNL#{val['propertyName']['en']}_#{state}(int size, int edt)\n{\n")
    print_call_function("   ",val['propertyName']['en'],state)
end

def print_call_function (indent,val,state)
    print("#{indent}return c#{val}_#{state}( );\n}\n")
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