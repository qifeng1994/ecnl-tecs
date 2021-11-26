# blockを生成するため

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
#           "propertyName:stateName"
#         ],
#         [
#           "propertyName:stateName",
#           "propertyName:stateName"
#         ]
#       ]
#     }
#   ],
#   "output": null,
#   "colour": 230
# }

# blockを生成するメソッド
# Blockly.defineBlocksWithJsonArray([JSON]);

# 数字がある場合は:


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

def parse_properties (val,options)
    val.each{ |prop_id,val2|
        if val2['oneOf'] then

        else
            #if val2['accessRule']['set'] == 'required' then
                propertyName = val2['propertyName']['en']
                if val2['data']['$ref'] then
                ref = val2['data']['$ref'].sub( /#\/definitions\//, "" )
                val3 = Definitions[ref]
                parse_definitions(val3,propertyName,options)
                elsif val2['data']['type'] == 'state' then
                val3 = val2['data']
                parse_definitions(val3,propertyName,options)
                elsif val2['data']['oneOf'] then
                val2['data']['oneOf'].each{ |val3|
                    if val3['$ref'] then
                    ref = val3['$ref'].sub( /#\/definitions\//, "" )
                    val4 = Definitions[ref]
                    parse_definitions(val4,propertyName,options)
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

def parse_definitions(val,propertyName,options)
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
        print_array(propertyName,val,options)
    else
    end

end

def print_array(propertyName,val,options)

    val['enum'].each{|edt|
        option = Array.new
        option.push("#{propertyName}  #{edt['state']['en']}")
        option.push("#{propertyName}  #{edt['state']['en']}")
        options.push(option)
    }  
end

def font_change(name)
    return name.gsub("/"," ").split(/ |\_|\-/).map(&:capitalize).join(" ").gsub(/\s+/, '')
end

def temp_method (val,array)
    className = font_change(val['className']['en'])
    blocks = Hash.new
    args0 = []
    options =[["OperatingStatus  ON","OperatingStatus  ON"],["OperatingStatus  OFF","OperatingStatus  OFF"]]
    
    blocks = {"type" => "#{className}", "message0" => "#{className} %1", "output" => nil, "colour" => 230}
    blocks.store("args0" , args0)
    arguements = {"type" => "field_dropdown", "name" => "#{className}", "options" => options}
    args0.push(arguements)

    parse_properties(val['elProperties'],options)
    if arguements["options"].empty? then 
    else
        array.push(blocks)
        # puts ("<block type=\"#{className}\"></block>")
    end

    
    #json = JSON.pretty_generate(blocks)
    #puts(json)
    #blockly = File.open("block.json","a+")
    #blockly.puts json
    # blockly.puts("#{json},")
    #blockly.close

    
end

array = Array.new
Devices.each{ |id, val|
    if val['oneOf'] then
        val['oneOf'].each{|val2|
        temp_method(val2,array)
        }
    elsif val['className'] == nil then
        #print "*** #{id} has no class name ***\n"
    elsif val['className']['en'] then   
        temp_method(val,array)
        #print( "#{val['className']['en']} = #{id}\n" )
    elsif val['className']['ja'] then
        #print( "#{val['className']['ja']} = #{id}\n" )
    else
        #print "### #{id} has class name but has neither 'ja' nor 'en' ***\n"
    end
}

json = JSON.pretty_generate(array)
blockly = File.open("block.json","w+")
blockly.puts json
blockly.close
