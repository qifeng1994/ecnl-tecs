# 2021/05/18 cfgファイルを生成するため
# フォルダー構成
#     lib/#{className}/src/echonet_main.cfg 
#                         echonet_main.c 
#                         t#{className}.c 
#                         #{className}.cdl

# cfg構造：ノードオブジェクト + デバイス
#     ECN_CRE_EOBJ()
#     ECN_DEF_EPRP()
# cfg注意点：access ruleはrequiredのみ,デバイスプロパティはsuper classから継承？

# 2021/05/25 生成正确的路径和空文件，验证之前的方法可行性


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

def font_change(name)
    return name.gsub("/"," ").split(/ |\_|\-/).map(&:capitalize).join(" ").gsub(/\s+/, '')
end

def font_objName(name)
    return name.upcase.gsub(/\s+/,'_') #先全部替换大写，在把空格替换为下划线
end

def temp_method(fileName, val)
    objName_jp = val['className']['ja']
    objName = font_objName(val['className']['en'])
    fileName.puts ("/*#{objName_jp}*/")
    fileName.puts ("ECN_CRE_EOBJ(#{objName}_CLASS_EOBJ,{EOBJ_DEVICE, LOCAL_NODE_EOBJ,number??,EOJ_X1_AMENITY,EOJ_X2_#{objName}_CLASS,EOJ_X3_#{objName}_CLASS});")
    # todo:property解析 从super class开始？？？
end

def folder_gen(val)
    className = font_change(val['className']['en'])
    FileUtils.mkdir_p("lib/#{className}/src") # 建立多重路径

    # [2] 各フォルダーの中 ファイルを生成する
    cfg = File.open("lib/#{className}/src/echonet_main.cfg","w+")
    temp_method(cfg, val) #[3]解析json
    cfg.close

    # cdl_file_gen()
    # app_file_gen()
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


# tempfileの使い方：https://keruuweb.com/ruby-tempfile%E3%81%AE%E4%BD%BF%E3%81%84%E6%96%B9/
#     t = Tempfile.open
#     t.unlink #オブジェクトを削除する
# ブロックで表す場合：
# Tempfile.open{ |t|
#     t.method 
# }
