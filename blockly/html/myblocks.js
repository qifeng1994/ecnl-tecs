Blockly.Blocks['setlighton'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("set light on");
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['setlightoff'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("set light off");
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['whenlightison'] = {
  init: function() {
    this.appendStatementInput("NAME")
        .setCheck(null)
        .appendField("when light is on");
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['whenlightisoff'] = {
  init: function() {
    this.appendStatementInput("NAME")
        .setCheck(null)
        .appendField("when light is off");
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['setairconon'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("set aircon on");
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(180);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['setairconoff'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("set aircon off");
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(180);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['lightis'] = {
  init: function() {
    this.appendValueInput("NAME")
        .setCheck(null)
        .appendField("status of light is");
    this.setOutput(true, null);
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

