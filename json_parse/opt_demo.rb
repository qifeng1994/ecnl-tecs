# Usage: $ ruby ○○_gen.rb src_json gen_dir [className] [propertyName]

# 1.ディフォルト
# $ ruby ○○_gen.rb src_json gen_dir
# 全てのデバイスを指定したディレクトリで生成する(生成したプロパティはrequiredのみ)

# 2. [className] デバイス名を指定する(生成したプロパティはrequiredのみ)
# $ ruby ○○_gen.rb src_json gen_dir  -c "className1" "className2"

# 3. [propertyName] プロパティ名を指定する、前はclassNameが必要
# $ ruby ○○_gen.rb src_json gen_dir -c "className1" -p "propertyName1" "propertyName2"


require 'optparse'
opt = OptionParser.new
optProperty = false

devdesc_json_fname = ARGV[0]
gen_dir = ARGV[1]

def parse_method_class(className)
    puts "generate #{className}"
end

def parse_method_property(propertyName)
    if !optProperty then
        puts "generate all properties"
    else
        puts "generate #{propertyName} of #{className}"
    end
end

opt.on('-c','--add name','add devices class name') { |className|
    puts "add #{className}"
    parse_method_class(className)
}

opt.on('-p','--add property''add property name') do |propertyName|
    optProperty = true
    parse_method_property(propertyName)
end

opt.parse(ARGV)
# puts "devices description file is #{devdesc_json_fname}"
# puts "generate directory is #{gen_dir}"
