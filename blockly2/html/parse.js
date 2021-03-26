window.onload = function (){
    var url = "../../json_parse/appendix_v3-1-6r5/EL_DeviceDescription_3_1_6r5.json"
    var request = new XMLHttpRequest();
    request.open("get",url);
    request.send(null);
    request.onload = function(){
        var json = JSON.parse(request.responseText);
        console.log(json);
    }
}

// var dataTank =[];//创建容器
// var oldData = data;//获取Json数据
// for (var i=0;i<oldData.length;i++){ //提取所需值组成新数组
//     dataTank.push({"name":income[i].name,"value":income[i].value});
// }
// ————————————————
// 版权声明：本文为CSDN博主「Moneo」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
// 原文链接：https://blog.csdn.net/moneo/article/details/70861066