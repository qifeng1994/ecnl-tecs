# .hを生成するため
# デバイスプロパティの構造体、関数を宣言する
# rubyコードの一部はcfg_gen.rbから継承された

require "json"
require 'fileutils'
require 'tempfile'
# Echonet Lite Device Description in JSON
devdesc_json_fname = "appendix_v3-1-6r5/EL_DeviceDescription_3_1_6r5.json"

# Read Device Description (String)
devdesc_json = File.read(devdesc_json_fname)

# Convert JSON String to Hash
DevDesc = JSON[devdesc_json]
Devices = DevDesc["devices"]
Definitions = DevDesc["definitions"]

def print_default_struct(fileName)
    return 0
end

def font_change(name)
    return name.gsub("/"," ").split(/ |\_|\-/).map(&:capitalize).join(" ").gsub(/\s+/, '')
end

def font_NAME(name)
    return name.upcase.gsub(/\s+/,'_') #先全部替换大写，在把空格替换为下划线
end

def font_name(name)
    return name.downcase.gsub(/\s+/,'_')
end


def folder_gen(val)
    className = font_change(val['className']['en'])
    FileUtils.mkdir_p("lib/#{className}/src") # 建立多重路径
    # [2] 各フォルダーの中 ファイルを生成する
    h = File.open("lib/#{className}/src/echonet_main.h","w+")
    print_default_struct(h)


    objName_jp = val['className']['ja']
    h.puts ("/*#{objName_jp}*/")
    objname = font_name(val['className']['en'])
    # 只要get是required就生成结构体
    val['elProperties'].each{|prop_id,val2|
        if val2['oneOf'] then 

        else
            if val2['accessRule']['get'] == 'required' then 
                propName_jp = val2['propertyName']['ja']
                propname_en = font_name(val2['propertyName']['en'])
                h.puts ("struct #{objname}_t {")
                h.puts ("   /*#{propName_jp}*/\n    #{propname_en};\n};")

            end
        end

    }
end

Devices.each{ |id, val|
    # [1] classNameを持っていく　フォルダーを作る
    if val['oneOf'] then
        val['oneOf'].each{|val2|
            folder_gen(val2)
        }
    elsif val['className'] == nil then
        #print "*** #{id} has no class name ***\n"
    elsif val['className']['en'] then   
        folder_gen(val)
        #print( "#{val['className']['en']} = #{id}\n" )
    elsif val['className']['ja'] then
        #print( "#{val['className']['ja']} = #{id}\n" )
    else
        #print "### #{id} has class name but has neither 'ja' nor 'en' ***\n"
    end
}