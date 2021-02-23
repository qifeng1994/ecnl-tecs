// モジュールの機能をELとして使う
// import functions as EL object
var EL = require('echonet-lite');

// 自分自身のオブジェクトを決める
// set EOJ for this script
// initializeで設定される，必ず何か設定しないといけない，今回はコントローラ
// this EOJ list is required. '05ff01' is a controller.
var objList = ['05ff01'];

////////////////////////////////////////////////////////////////////////////
// 初期化するとともに，受信動作をコールバックで登録する
// initialize and setting callback. the callback is called by reseived packet.
var elsocket = EL.initialize( objList, function( rinfo, els, err ) {

	if( err ){
		console.dir(err);
	}else{
		console.log('==============================');
		console.log('Get ECHONET Lite data');
		console.log('rinfo is ');
		console.dir(rinfo);

		// elsはELDATA構造になっているので使いやすいかも
		// els is ELDATA stracture.
		console.log('----');
		console.log('els is ');
		console.dir(els);

		// ELDATAをArrayにする事で使いやすい人もいるかも
		// convert ELDATA into byte array.
		console.log('----');
		console.log( 'ECHONET Lite data array is ' );
		console.log( EL.ELDATA2Array( els ) );

		// 受信データをもとに，実は内部的にfacilitiesの中で管理している
		// this module manages facilities by receved packets.
		console.log('----');
		console.log( 'Found facilities are ' );
		console.dir( EL.facilities );
	}
});

// NetworkのELをすべてsearchしてみよう．
// search ECHONET nodes in local network
EL.search();