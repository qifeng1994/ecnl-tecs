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
def print_properties( val, indent="  " )
    val.each{|prop_id, val2| 
        if val2['oneOf'] then
            print( "#{indent}oneOf\n" )
            val2['oneOf'].each{ |val3|
                print( "#{indent}    #{val3['propertyName']['en']} = #{prop_id}\n" )
            }
        else
            print( "#{indent}#{val2['propertyName']['en']} = #{prop_id}\n" )
            #print("#{indent} #{val2['data']['$ref']}\n" )
               if val2['data'] && val2['data']['$ref'] then
                    ref = val2['data']['$ref'].sub( /#\/definitions\//, "" )

                    val3 = Definitions[ref]
                    if val3['type'] == "state" then
                        print "#{indent}  state_type = '#{ref}'\n"
                        print_state_type( indent + "    ", val3 )
                    elsif val3['type'] == "number" then
                        print "#{indent}  number_type = '#{ref}'\n"
                        print_number_type( indent + "    ", val3 )
                    end
                  
              else
                  print "#{indent}  data or ref not defined\n"
              end
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

# Echonet Lite Device Description in JSON
devdesc_json_fname = "appendix_v3-1-6r5/EL_DeviceDescription_3_1_6r5.json"

# Read Device Description (String)
devdesc_json = File.read(devdesc_json_fname)

# Convert JSON String to Hash
DevDesc = JSON[devdesc_json]
Devices = DevDesc["devices"]
Definitions = DevDesc["definitions"]

# print definitions
# Definitions.each{ |id,val|
#     if val['size'] then
#         print("#{id}\n")
#         print(" size = #{val['size']}\n")
#         i=0
#         while val['enum'][i] do
#             print(" #{val['enum'][i]['edt']} = #{val['enum'][i]['state']['en']}\n")
#             i=i+1
#         end
#     end
# }

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



# devices_config_fname = "../app2_light/src/echonet_main.cfg"
# devices_config = File.read(devices_config_fname)

# devices_target_fname = "../app2_light/src/echonet_main.c"
# File.open(devices_target_fname,"r+") do |f|
#     devices_config_fname.each_line do |line|
#         if /ECN_DEF_EPRP/ =~ line
#             parameter = line.split
#                 className = parameter[0]
#                 edt = parameter[1]
#                 function_name = parameter[5]
#             Devices.each {|id,val|
#                 if val['className'] = className
#                     val.each{|prop_id,val2|
#                         if val2['data']['enum']['edt'] = edt
#                             state = val2['data']['enum']['state']
#                         end
#                     }
#                 end
#             }

#         end
#     end
#     devices_target_fname.each_line do |line|
#         if function_name =~ line
#             f.write state
#         end
# end

