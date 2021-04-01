// JSON.parse(text[,reviver])

window.onload = function (){
    var url = "../../json_parse/appendix_v3-1-6r5/EL_DeviceDescription_3_1_6r5.json"
    var request = new XMLHttpRequest();
    request.open("get",url);
    request.send(null);
    request.onload = function(){
        var json = JSON.parse(request.responseText);
        var devices = json.devices
        // 遍历对象
        for(let deviceId in devices){ //deviceId: 0x0EF0
            // var deviceContent = devices[deviceId]
            console.log(devices["0x0EF0"]);
            // console.log(deviceContent);
            // if (deviceContent == 'oneOf') {
            //     console.log(true);
            // }
            // else console.log(false);
        }
        
    }
}


// 在node.js中解析JSON的方法
// var fs = require("fs");
// var filePath = "../../json_parse/appendix_v3-1-6r5/EL_DeviceDescription_3_1_6r5.json"
// var fileContent = fs.readFileSync(filePath).toString();
// var fileJson = JSON.parse(fileContent);
// console.log(fileJson);


// 参考：https://www.nhooo.com/json/json_parse.html
// 来自服务器的JSON，请求JSON文件并解析响应
// 数组作为JSON，返回javascript数组

// var dataTank =[];//创建容器
// var oldData = data;//获取Json数据
// for (var i=0;i<oldData.length;i++){ //提取所需值组成新数组
//     dataTank.push({"name":income[i].name,"value":income[i].value});
// }
