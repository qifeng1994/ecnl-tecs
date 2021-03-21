# coding: utf-8
#
# EL_DeviceDescription_3_1_6r5.json (http://sh-center.org/sdk の中ほどに所在)
# をパースし、デバイスやプロパティの一覧を出力
#

require "json"

# val::Hash{prop_id(Hex)=>
#           Hash{"propertyName" =>
#               Hash{ "en" => String(property name), "ja" => String(property name)}
#           }
#      }
def print_properties( val, indent="" )
    val.each{|prop_id, val2| 
        if val2['oneOf'] then
            print( "#{indent}  oneOf\n" )
            val2['oneOf'].each{ |val3|
                print( "#{indent}    #{val3['propertyName']['en']} = #{prop_id}\n" )
            }
        else
            print( "#{indent}  #{val2['propertyName']['en']} = #{prop_id}\n" )
        end
    }
end


# Echonet Lite Device Description in JSON
devdesc_json_fname = "appendix_v3-1-6r5/EL_DeviceDescription_3_1_6r5.json"
#devdesc_json_fname = "demo.json"

# Read Device Description (String)
devdesc_json = File.read(devdesc_json_fname)

# Convert JSON String to Hash
DevDesc = JSON[devdesc_json]
Devices = DevDesc["devices"]
Definitions = DevDesc["definitions"]

# print definitions
Definitions.each{ |id,val|
    if val['size'] then
        print("#{id}\n")
        print(" size = #{val['size']}\n")
        i=0
        while val['enum'][i] do
            print(" #{val['enum'][i]['edt']} = #{val['enum'][i]['state']['en']}\n")
            i=i+1
        end
    end

}
# print all devices
Devices.each{ |id, val|
    if val['oneOf'] then
        print( "#{id} oneOf\n" )
        val['oneOf'].each{|val2|
            print( "  #{val2['className']['en']}\n" )
            print_properties( val2['elProperties'], "  " )
        }
    elsif val['className'] == nil then
        print "*** #{id} has no class name ***\n"
    elsif val['className']['en'] then
        print( "#{val['className']['en']} = #{id}\n" )
        print_properties( val['elProperties'] )
    elsif val['className']['ja'] then
        print( "#{val['className']['ja']} = #{id}\n" )
        print_properties( val['elProperties'] )
    else
        print "### #{id} has class name but has neither 'ja' nor 'en' ***\n"
    end
}

