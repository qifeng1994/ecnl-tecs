// var str = '春运热潮带动下，一些互联网企业也纷纷推出 “抢票软件”，据说能增加买到车票的概率，引来无数网友下载。对此，相关部门提醒市民谨慎使用，以防个人信息被盗。';
// var flag = 10;
// var arr = [];
// var count =0;
// for(var i=0,len=str.length/10;i<len;i++) {
// str1 = str.substr(0,10);
// str = str.replace(str1,'');
// console.log(str1);
// }

var str = '10,81,00,00,05,FF,01,02,90,01,60,01,80,01,3010,81,00,00,05,FF,01,02,90,01,60,01,80,01,31';
for(var i=0,len=str.length/44;i<len;i++) {
//切割字符串
str1 = str.substr(0,44);
//把字符串原来位置的部分定义为null,即划掉
str = str.replace(str1,'');
console.log(str1);
}