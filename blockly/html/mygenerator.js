Blockly.JavaScript['setlighton'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  var code = '10,81,00,00,05,FF,01,02,90,01,60,01,80,01,30';
  return code;
};

Blockly.JavaScript['setlightoff'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  var code = '10,81,00,00,05,FF,01,02,90,01,60,01,80,01,31';
  return code;
};

Blockly.JavaScript['whenlightison'] = function(block) {
  var statements_name = Blockly.JavaScript.statementToCode(block, 'NAME');
  // TODO: Assemble JavaScript into code variable.
  var code = '...;\n';
  return code;
};

Blockly.JavaScript['whenlightisoff'] = function(block) {
  var statements_name = Blockly.JavaScript.statementToCode(block, 'NAME');
  // TODO: Assemble JavaScript into code variable.
  var code = '...;\n';
  return code;
};

Blockly.JavaScript['setairconon'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  var code = '...;\n';
  return code;
};

Blockly.JavaScript['setairconoff'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  var code = '...;\n';
  return code;
};

Blockly.JavaScript['lightis'] = function(block) {
  var value_name = Blockly.JavaScript.valueToCode(block, 'NAME', Blockly.JavaScript.ORDER_ATOMIC);
  // TODO: Assemble JavaScript into code variable.
  var code = '10,81,00,00,05,FF,01,02,90,01,62,01,80,00';
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};