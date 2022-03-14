# ecnl-tecs

一部のソースコードは
https://dev.toppers.jp/trac_user/contrib/browser/asp3_tinet_ecnl_rx/trunk
からもらった、それ以外のフォルダを説明します。

1. GeneralLighting/　は自動生成したlightのソースコードです

    GeneralLighting/DebugEther/GeneralLighting.bin はgr-peachに書き込めば、動作確認できます

    app2_light/ はlightのソースコードです

2. blockly2/ はGUIのソースコードです

    blockly2を使い方はnode.jsをインストールしておく、blockly2/でnode app.js、サーバーが起動する。ブラウザで http://localhost:3000
    を入力と、ユーザインタフェースが出てきます。

    demo動画：https://youtu.be/-l31MFus9c4

    gr-peachだけがあれば、GeneralLightingのon/off設定が確認できます
3. json_parse/option_parse/ ○○_gen.rbスクリプトはそれぞれのコードジェネレータです

    json_parse/appendix_v3-1-6r5 にはECHONET機器を定義するjsonファイルがあります

コードジェネレータの使い方：

大体イメージとしては：
$ ruby ○○_gen.rb src_json gen_dir [className] [propertyName]

1. ディフォルト：全てのデバイスを指定したディレクトリで生成する(生成したプロパティはrequiredのみ)

    $ ruby ○○_gen.rb src_json gen_dir

2. [className] デバイス名を指定する(生成したプロパティはrequiredのみ)

    $ ruby ○○_gen.rb src_json gen_dir  "className1" "className2"

3. [propertyName] プロパティ名を指定する、前はclassNameが必要

    $ ruby ○○_gen.rb src_json gen_dir  "className1" -p "propertyName1" "propertyName2"


GUIのウェブバージョンは https://github.com/qifeng1994/blockly_ecnl_dev
で公開しています。https://qifeng1994.github.io/blockly_ecnl_dev/demos/code/index.html から日本語版のページをアクセスできます