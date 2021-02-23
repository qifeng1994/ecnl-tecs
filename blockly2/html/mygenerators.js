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
  var code = 'send("192.168.137.112","10,81,00,00,05,FF,01,01,30,01,60,01,80,01,30");\n';
  return code;
};

Blockly.JavaScript['setairconoff'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  var code = 'send("192.168.137.112","10,81,00,00,05,FF,01,01,30,01,60,01,80,01,31");\n';
  return code;
};

Blockly.JavaScript['lightison'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  var code = 'send("192.168.137.112","10,81,00,00,05,FF,01,02,90,01,62,01,80,00");\n'
  + 'analyzeReceiveData() = "30";\n';
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};

Blockly.JavaScript['lightisoff'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  var code = 'send("192.168.137.112","10,81,00,00,05,FF,01,02,90,01,62,01,80,00");\n'
  + 'analyzeReceiveData() = "31";\n';
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};