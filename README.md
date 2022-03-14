# ecnl-tecs
blocklyを使い方：
node.jsをインストールしておく、blockly2/でnode app.js、サーバーが起動する

demo動画：https://youtu.be/5Y79WWEdqFA

プラグイン：json_parse/option_parse/ _gen.rbスクリプトはそれぞれのコードジェネレータです

app2_light/ はlightのソースコードです

GeneralLighting/　は自動生成したlightのソースコードです

json_parse/appendix_v3-1-6r5　にはECHONET機器を定義するjsonファイルがあります

コードジェネレータの使い方：

$ ruby ○○_gen.rb src_json gen_dir [className] [propertyName]

1.ディフォルト：全てのデバイスを指定したディレクトリで生成する(生成したプロパティはrequiredのみ)

$ ruby ○○_gen.rb src_json gen_dir

2.[className] デバイス名を指定する(生成したプロパティはrequiredのみ)

$ ruby ○○_gen.rb src_json gen_dir  "className1" "className2"

3.[propertyName] プロパティ名を指定する、前はclassNameが必要

$ ruby ○○_gen.rb src_json gen_dir  "className1" -p "propertyName1" "propertyName2“


