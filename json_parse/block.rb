# blockを生成するため
# 新しいバージョンscriptはblock_gen.rb

# listの形
# 新建一个hash,然后store固定的key和value，args0的value定义为一个array
# {
#   "type": "className",
#   "message0": "className %1",
#   "args0": [
#     {
#       "type": "field_dropdown",
#       "name": "NAME",
#       "options": [
#         [
#           "propertyName:stateName",
#           "OPTIONNAME"
#         ],
#         [
#           "propertyName:stateName",
#           "OPTIONNAME"
#         ]
#       ]
#     }
#   ],
#   "output": null,
#   "colour": 230
# }

# blockを生成するメソッド
# Blockly.defineBlocksWithJsonArray([JSON]);

# arrayメソッド：
# 空のオブジェクトを定義する場合
# array1 = []
# array2 = Array.new  # Arrayクラスを使う場合



# HashがらJSONへ：JSON.pretty_generate(Hash)
# hash要素を追加する：hash.store(key,value)


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

def parse_properties (val,className)
    val.each{ |prop_id,val2|
        if val2['oneOf'] then

        else
            #if val2['accessRule']['set'] == 'required' then
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
            #else
            #end
        end
    }
end

def parse_definitions(val,propertyName,className)
    if val['type'] == 'number' then
        type = val['format']
        propertyName = font_change(propertyName)
        #size = property_format_size(type)
        min = val['minimum']
        max = val['maximum']
        #print_signature_number("    ",propertyName)
    elsif val['type'] == 'state' then
        size = val['size']
        #type = property_data_type(size)
        propertyName = font_change(propertyName)
        print_array(propertyName,val,className)
    else
    end

end

def print_array(propertyName,val,className)
    blocks = Hash.new
    args0 = []
    options =[]
    
    blocks = {"type" => "#{className}", "message0" => "#{className} %1", "output" => "null", "colour" => 230}
    blocks.store("args0" , args0)
    arguements = {"type" => "field_dropdown", "name" => "NAME", "options" => options}
    args0.push(arguements)

    val['enum'].each{|edt|
        option = Array.new
        option.push("#{propertyName}  #{edt['state']['en']}")
        option.push("OPTIONNAME")
        options.push(option)
    }

    json = JSON.pretty_generate(blocks)
    blockly = File.open("block.json","a+")
    blockly.puts(json)
    blockly.close
end

def font_change(name)
    return name.gsub("/"," ").split(/ |\_|\-/).map(&:capitalize).join(" ").gsub(/\s+/, '')
end

def temp_method (val)
    className = font_change(val['className']['en'])
    parse_properties(val['elProperties'],className)
end

if true then 

Devices.each{ |id, val|
    if val['oneOf'] then
        val['oneOf'].each{|val2|
        temp_method (val2)
        }
    elsif val['className'] == nil then
        #print "*** #{id} has no class name ***\n"
    elsif val['className']['en'] then   
        temp_method (val)
        #print( "#{val['className']['en']} = #{id}\n" )
    elsif val['className']['ja'] then
        #print( "#{val['className']['ja']} = #{id}\n" )
    else
        #print "### #{id} has class name but has neither 'ja' nor 'en' ***\n"
    end
}

else
File.delete("block.json")
end