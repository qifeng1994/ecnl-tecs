// JSON.parse(text[,reviver])
// JSON 语法是 JavaScript 对象表示语法的子集
// 数据在"key":"value"对中; 数据由逗号分隔
// 大括号 {} 保存对象; 对象可以包含多个"key":"value"
// 中括号 [] 保存数组，数组可以包含多个对象{}
// 访问对象的value通过 obj.key 或 obj["key"]

// ECNL.json:
// {
//     "metaData":{key:value, key:value},
//     "definitions":{key:value, "state_ON-OFF-3031":value, key:value},
//     "devices":{"0x0EF0":{value}, "0x0260":{"oneOf":[{key:value},{key:value}] } }
// }

// "0x0260" "0x0263" "0x027E" "0x0288" : {"oneOf":[value]}
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
            var deviceContent = devices[deviceId]
            for (let x in deviceContent){
                if (x == 'oneOf'){
                    console.log(deviceId);
                }
            }
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
