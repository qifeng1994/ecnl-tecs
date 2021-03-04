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

Blockly.Blocks['lightison'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("light is on");
    this.setOutput(true, null);
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['lightisoff'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("light is off");
    this.setOutput(true, null);
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['get_operation_status_of_light'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("get operation status of light");
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};