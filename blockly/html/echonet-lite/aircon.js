//////////////////////////////////////////////////////////////////////
// ECHONET Lite
var EL = require('echonet-lite');

// エアコンを例に
// aircon object code is 0130, instance number is 01
var objList = ['013001'];

// 自分のエアコンのデータ，今回はこのデータをグローバル的に使用する方法で紹介する．
// define and management of my aircon data.
var airconObj = {
    // super
    "80": [0x30],  // 動作状態, power
    "81": [0xff],  // 設置場所, setting position
    "82": [0x00, 0x00, 0x66, 0x00], // EL version, 1.1
    "88": [0x42],  // 異常状態, error status
    "8a": [0x00, 0x00, 0x77], // maker code
    "9d": [0x04, 0x80, 0x8f, 0xa0, 0xb0],        // inf map, 1 Byte目は個数
    "9e": [0x04, 0x80, 0x8f, 0xa0, 0xb0],        // set map, 1 Byte目は個数
    "9f": [0x0d, 0x80, 0x81, 0x82, 0x88, 0x8a, 0x8f, 0x9d, 0x9e, 0x9f, 0xa0, 0xb0, 0xb3, 0xbb], // get map, 1 Byte目は個数
    // child
    "8f": [0x41], // 節電動作設定, mode of power saving operation
    "a0": [0x31], // 風量設定, Air volume setting
    "b0": [0x41], // 運転モード設定, running mode
    "b3": [0x19], // 温度設定値, temperature setting
    "bb": [0x1a] // 室内温度計測値, indoor temperature measurement
};

// ノードプロファイルに関しては内部処理するので，ユーザーはエアコンに関する受信処理だけを記述する．
// the module processes node profile automatically, programmer should describe process for air conditioner
var elsocket = EL.initialize( objList, function( rinfo, els ) {
    // コントローラがGetしてくるので，対応してあげる
    // エアコンを指定してきたかチェック
    if( els.DEOJ == '013000' || els.DEOJ == '013001' ) {  // the data is for aircon?
        // ESVで振り分け，主に0x60系列に対応すればいい
        switch( els.ESV ) {
            ////////////////////////////////////////////////////////////////////////////////////
            // 0x6x
          case EL.SETI: // "60
            break;
          case EL.SETC: // "61"，返信必要あり; responce required.
            break;

          case EL.GET: // 0x62，Get
            for( var epc in els.DETAILs ) {
                if( airconObj[epc] ) { // 持ってるEPCのとき;
                    EL.sendOPC1( rinfo.address, [0x01, 0x30, 0x01], EL.toHexArray(els.SEOJ), 0x72, EL.toHexArray(epc), airconObj[epc] );
                } else { // 持っていないEPCのとき, SNA; my air conditioner do not have the property.
                    EL.sendOPC1( rinfo.address, [0x01, 0x30, 0x01], EL.toHexArray(els.SEOJ), 0x52, EL.toHexArray(epc), [0x00] );
                }
            }
            break;

          case EL.INFREQ: // 0x63
            break;

          case EL.SETGET: // "6e"
            break;

          default:
            // console.log( "???" );
            // console.dir( els );
            break;
        }
    }
});

//////////////////////////////////////////////////////////////////////
// 全て立ち上がったのでINFでエアコンONの宣言
// air conditiner is already.
EL.sendOPC1( '224.0.23.0', [0x01,0x30,0x01], [0x0e,0xf0,0x01], 0x73, 0x80, [0x30]);