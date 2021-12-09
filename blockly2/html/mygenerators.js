Blockly.JavaScript['setlighton'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  var code = 'send("192.168.137.112","10,81,00,00,05,FF,01,02,90,01,60,01,80,01,30");\n';
  return code;
};

Blockly.JavaScript['setlightoff'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  var code = 'send("192.168.137.112","10,81,00,00,05,FF,01,02,90,01,60,01,80,01,31");\n';
  return code;
};

Blockly.JavaScript['setairconon'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  var code = 'send("192.168.137.114","10,81,00,00,05,FF,01,01,30,01,60,01,80,01,30");\n';
  return code;
};

Blockly.JavaScript['setairconoff'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  var code = 'send("192.168.137.114","10,81,00,00,05,FF,01,01,30,01,60,01,80,01,31");\n';
  return code;
};

Blockly.JavaScript['lightison'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  var code = 'operationStatus == "30"\n';
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};

Blockly.JavaScript['lightisoff'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  //var code = 'parseEl8uintarray(el8uintarray.uint8Array) == "31"\n';
  var code = 'operationStatus == "31"\n';
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};

Blockly.JavaScript['get_operation_status_of_light'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  var code = 'send("192.168.137.112","10,81,00,00,05,FF,01,02,90,01,62,01,80,00");\n';
  return code;
};


Blockly.JavaScript['set'] = function(block) {
  var value_name = Blockly.JavaScript.valueToCode(block, 'NAME', Blockly.JavaScript.ORDER_ATOMIC);
  // TODO: Assemble JavaScript into code variable.
  var code = 'setProperty' + value_name + ';\n';
  return code;
};




Blockly.JavaScript['GeneralLighting'] = function(block){
  var operator = block.getFieldValue('GeneralLighting');
  var code;
  switch (operator){
    case 'OperatingStatus  ON':
      code = '"192.168.137.112","10,81,00,00,05,FF,01,02,90,01,61,01,80,01,30"';
      break;
    case 'OperatingStatus  OFF':
      code = '"192.168.137.112","10,81,00,00,05,FF,01,02,90,01,61,01,80,01,31"';
      break;
  }
  return [code, Blockly.JavaScript.ORDER_NONE];
}

Blockly.JavaScript['HomeAirConditioner'] = function(block){
  var operator = block.getFieldValue('HomeAirConditioner');
  var code;
  switch (operator){
    case 'OperatingStatus  ON':
      code = '"192.168.137.114","10,81,00,00,05,FF,01,01,30,01,60,01,80,01,30"';
      break;
    case 'OperatingStatus  OFF':
      code = '"192.168.137.114","10,81,00,00,05,FF,01,01,30,01,60,01,80,01,31"';
      break;
  }
  return [code, Blockly.JavaScript.ORDER_NONE];
}

Blockly.JavaScript['trigger_action'] = function(block) {
  var value_trigger = Blockly.JavaScript.valueToCode(block, 'trigger', Blockly.JavaScript.ORDER_ATOMIC);
  var value_action = Blockly.JavaScript.valueToCode(block, 'action', Blockly.JavaScript.ORDER_ATOMIC);
  var code = 'if ( getProperty(' + value_trigger + ')) {\n' + 'setProperty(' + value_action + ');\n'+'}\n';
  return code;
};

Blockly.JavaScript['time'] = function(block) {
  var text_hour = block.getFieldValue('hour');
  var text_minute = block.getFieldValue('minute');
  var dropdown_apm = block.getFieldValue('APM');
  var value_name = Blockly.JavaScript.valueToCode(block, 'NAME', Blockly.JavaScript.ORDER_ATOMIC);
  // TODO: Assemble JavaScript into code variable.
  var code = '...;\n';
  return code;
};

Blockly.JavaScript['period'] = function(block) {
  var text_time1 = block.getFieldValue('time1');
  var text_time2 = block.getFieldValue('time2');
  var text_time3 = block.getFieldValue('time3');
  var text_time4 = block.getFieldValue('time4');
  var value_name = Blockly.JavaScript.valueToCode(block, 'NAME', Blockly.JavaScript.ORDER_ATOMIC);
  // TODO: Assemble JavaScript into code variable.
  var code = '...;\n';
  return code;
};

Blockly.JavaScript['timer'] = function(block) {
  var text_hour = block.getFieldValue('hour');
  var text_minute = block.getFieldValue('minute');
  // TODO: Assemble JavaScript into code variable.
  var code = '...;\n';
  return code;
};

Blockly.JavaScript['weeks'] = function(block) {
  var dropdown_week1 = block.getFieldValue('week1');
  var dropdown_week2 = block.getFieldValue('week2');
  // TODO: Assemble JavaScript into code variable.
  var code = '...';
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};

Blockly.JavaScript['week'] = function(block) {
  var dropdown_week1 = block.getFieldValue('week1');
  // TODO: Assemble JavaScript into code variable.
  var code = '...';
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};

Blockly.JavaScript['general_lighting_number'] = function(block) {
  var dropdown_name = block.getFieldValue('NAME');
  var value_name = Blockly.JavaScript.valueToCode(block, 'NAME', Blockly.JavaScript.ORDER_ATOMIC);
  // TODO: Assemble JavaScript into code variable.
  var code = '...';
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};

Blockly.JavaScript['illuminance_sensor'] = function(block) {
  var dropdown_name = block.getFieldValue('NAME');
  // TODO: Assemble JavaScript into code variable.
  var code = '...';
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};