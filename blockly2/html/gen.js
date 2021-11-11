// 这个文件应该没什么用

{
    "type": "set General lighting",
    "message0": "set General lighting %1",
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "operating status : on",
            "OPTIONNAME"
          ],
          [
            "operating status : off",
            "OPTIONNAME"
          ]
        ]
      }
    ],
    "previousStatement": null,
    "nextStatement": null,
    "colour": 230,
  }
  
  Blockly.JavaScript['set'] = function(block) {
    var dropdown_name = block.getFieldValue('NAME');
    // TODO: Assemble JavaScript into code variable.
    var code = '...;\n';
    return code;
  };

  
  {
    "type": "get General lighting",
    "message0": "get General lighting %1",
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "operating status : on",
            "OPTIONNAME"
          ],
          [
            "operating status : off",
            "OPTIONNAME"
          ]
        ]
      }
    ],
    "output": null,
    "colour": 230,
  }

  Blockly.JavaScript['get'] = function(block) {
    var dropdown_name = block.getFieldValue('NAME');
    // TODO: Assemble JavaScript into code variable.
    var code = '...';
    // TODO: Change ORDER_NONE to the correct strength.
    return [code, Blockly.JavaScript.ORDER_NONE];
  };