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

devdesc_json_fname = ARGV[0]
gen_dir = ARGV[1]
className = ARGV[2,ARGV.length]

def parse_method_class(className)
    puts "generate #{className}"
end

def parse_method_property(propertyName, className)
    puts "generate #{propertyName} of #{className}"
end

# className = opt.on('-c','--add name','add devices class name') { |className|
#     parse_method_class(className)
# }

opt.on('-p','--add property''add property name') do |propertyName|
    name = ARGV[2]
    parse_method_property(propertyName, name)
end

opt.parse(ARGV)

