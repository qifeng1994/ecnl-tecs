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

// Block.json: { {keys:values},{keys:values} }
// {
//     "type": "setlighton",
//     "message0": "set light on",
//     "previousStatement": null,
//     "nextStatement": null,
//     "colour": 230,
//     "tooltip": "0x30"
// }

let statementBlock = {
    type : null,
    message0 : null,
    previousStatement : null,
    nextStatement : null,
    colour : null,
    tooltip : null
}

let statusBlock = {
    type : null,
    message0 : null,
    output :null,
    colour : null,
    tooltip : null
}

// 在node.js中解析JSON的方法
var fs = require("fs");
var filePath = "../../json_parse/appendix_v3-1-6r5/EL_DeviceDescription_3_1_6r5.json"
var fileContent = fs.readFileSync(filePath).toString();
var fileJson = JSON.parse(fileContent);
var devices = fileJson.devices
var definitions = fileJson.definitions

// 遍历对象
for(let deviceId in devices){ //deviceId: 0x0EF0
    var deviceContent = devices[deviceId]
    for (let key in deviceContent){
        //第一次为devices对象分类
        // if (key == 'oneOf'){
        //     console.log(deviceId + ' is oneOf');
        // }else if (! key == 'className') {
        //     console.log(deviceId + ' has no class name');
        // }else {

        // }

        //一般照明
        if (deviceContent[key]['en'] == 'General lighting'){
            //console.log(deviceId + ' is '+ deviceContent[key]['en']);
            var propertiesContent = deviceContent['elProperties']
            parseProperties(propertiesContent)
            
            
        }
    }
}

function parseProperties (value){
    for(let key in value){
        if (value[key]['oneOf']){
            for(i in value[key]['oneOf']){
                var str = value[key]['oneOf'][i].data.$ref
                var ref = str.replace("#/definitions/","")
                console.log(key + ' oneOf is ' + value[key]['oneOf'][i].propertyName.en)
                // console.log(ref)
                var definition = definitions[ref]
                parseDefinitions(definition)

            }
  
        }else {
            console.log(key + ' is ' + value[key]['propertyName']['en'])
        }
    }
}

//把javascript对象转换为JSON：
//JSON.stringify()
function convertJson (block){
    var myJson = JSON.stringify(block)
    console.log(myJson)
}

//把propertyName和data转换为Block的message0
function convertBlockMessage (value){
    
}

//把className定义为Block的type?

//解析definitions
function parseDefinitions(definition){
    for (let i in definition['enum']){
        edt = definition['enum'][i].edt
        state = definition['enum'][i].state.en
        console.log(edt +" : " + state)
    }
}