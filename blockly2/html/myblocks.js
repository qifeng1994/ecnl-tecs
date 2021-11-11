//通过json来定义block
// Blockly.defineBlocksWithJsonArray([
// {
//   "type": "setlighton",
//   "message0": "set light on",
//   "previousStatement": null,
//   "nextStatement": null,
//   "colour": 230,
//   "tooltip": "0x30"
// },

// {
//   "type": "setlightoff",
//   "message0": "set light off",
//   "previousStatement": null,
//   "nextStatement": null,
//   "colour": 230,
//   "tooltip": "0x31"
// }
// ]);

Blockly.defineBlocksWithJsonArray([
  {
    "type": "NodeProfile",
    "message0": "NodeProfile %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OperatingStatus  ON",
            "OPTIONNAME"
          ],
          [
            "OperatingStatus  OFF",
            "OPTIONNAME"
          ],
          [
            "FaultStatus  Fault",
            "OPTIONNAME"
          ],
          [
            "FaultStatus  No Fault",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "SuperClass",
    "message0": "SuperClass %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OperationStatus  ON",
            "OPTIONNAME"
          ],
          [
            "OperationStatus  OFF",
            "OPTIONNAME"
          ],
          [
            "FaultStatus  Fault",
            "OPTIONNAME"
          ],
          [
            "FaultStatus  No Fault",
            "OPTIONNAME"
          ],
          [
            "PowerSavingOperationSetting  Power Saving",
            "OPTIONNAME"
          ],
          [
            "PowerSavingOperationSetting  No Power Saving",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "GasLeakSensor",
    "message0": "GasLeakSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "GasLeakOccurrenceStatus  YES",
            "OPTIONNAME"
          ],
          [
            "GasLeakOccurrenceStatus  NO",
            "OPTIONNAME"
          ],
          [
            "GasLeakOccurrenceStatusResetting  Reset",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "CrimePreventionSensor",
    "message0": "CrimePreventionSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "InvasionOccurrenceStatus  YES",
            "OPTIONNAME"
          ],
          [
            "InvasionOccurrenceStatus  NO",
            "OPTIONNAME"
          ],
          [
            "InvasionOccurrenceStatusResetting  Reset",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "EmergencyButton",
    "message0": "EmergencyButton %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "EmergencyOccurrenceStatus  YES",
            "OPTIONNAME"
          ],
          [
            "EmergencyOccurrenceStatus  NO",
            "OPTIONNAME"
          ],
          [
            "EmergencyOccurrenceStatusResetting  Reset",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "FirstAidSensor",
    "message0": "FirstAidSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "FirstAidOccurrenceStatus  YES",
            "OPTIONNAME"
          ],
          [
            "FirstAidOccurrenceStatus  NO",
            "OPTIONNAME"
          ],
          [
            "FirstAidOccurrenceStatusResetting  Reset",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "EarthquakeSensor",
    "message0": "EarthquakeSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "EarthquakeOccurrenceStatus  YES",
            "OPTIONNAME"
          ],
          [
            "EarthquakeOccurrenceStatus  NO",
            "OPTIONNAME"
          ],
          [
            "EarthquakeOccurrenceStatusResetting  Reset",
            "OPTIONNAME"
          ],
          [
            "SiValueResetting  Reset",
            "OPTIONNAME"
          ],
          [
            "CollapseOccurrenceStatus  YES",
            "OPTIONNAME"
          ],
          [
            "CollapseOccurrenceStatus  NO",
            "OPTIONNAME"
          ],
          [
            "CollapseOccurrenceStatusResetting  Reset",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "ElectricLeakSensor",
    "message0": "ElectricLeakSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "ElectricLeakOccurrenceStatus  YES",
            "OPTIONNAME"
          ],
          [
            "ElectricLeakOccurrenceStatus  NO",
            "OPTIONNAME"
          ],
          [
            "ElectricLeakOccurrenceStatusResetting  Reset",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "HumanDetectionSensor",
    "message0": "HumanDetectionSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "HumanDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "HumanDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "VisitorSensor",
    "message0": "VisitorSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "VisitorDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "VisitorDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "CallSensor",
    "message0": "CallSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "CallStatus  YES",
            "OPTIONNAME"
          ],
          [
            "CallStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "CondensationSensor",
    "message0": "CondensationSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "CondensationDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "CondensationDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "AirPollution",
    "message0": "AirPollution %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "AirPollutionDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "AirPollutionDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "SoundSensor",
    "message0": "SoundSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "SoundDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "SoundDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "MailingSensor",
    "message0": "MailingSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "MailingDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "MailingDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "WeightSensor",
    "message0": "WeightSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "WeightDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "WeightDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "RainSensor",
    "message0": "RainSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "RainDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "RainDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "WaterLevelSensor",
    "message0": "WaterLevelSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "WaterLevelOverDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "WaterLevelOverDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "BathWaterLevelSensor",
    "message0": "BathWaterLevelSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "BathWaterLevelOverDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "BathWaterLevelOverDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "BathHeatingStatusSensor",
    "message0": "BathHeatingStatusSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "BathHeatingDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "BathHeatingDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "WaterLeakSensor",
    "message0": "WaterLeakSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "WaterLeakDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "WaterLeakDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "WaterOverflowSensor",
    "message0": "WaterOverflowSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "WaterOverflowDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "WaterOverflowDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "FireSensor",
    "message0": "FireSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "FireOccurrenceDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "FireOccurrenceDetectionStatus  NO",
            "OPTIONNAME"
          ],
          [
            "FireOccurrenceDetectionStatusResetting  Reset",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "CigaretteSmokeSensor",
    "message0": "CigaretteSmokeSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "Smoke(cigarette)DetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "Smoke(cigarette)DetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "GasSensor",
    "message0": "GasSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "GasDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "GasDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "VocSensor",
    "message0": "VocSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "VocDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "VocDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "OdorSensor",
    "message0": "OdorSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OdorDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "OdorDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "FlameSensor",
    "message0": "FlameSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "FlameDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "FlameDetectionStatus  NO",
            "OPTIONNAME"
          ],
          [
            "FlameDetectionStatusResetting  Reset",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "MicromotionSensor",
    "message0": "MicromotionSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "MicromotionDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "MicromotionDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "PassageSensor",
    "message0": "PassageSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "PassageDetectionDirection  No passage",
            "OPTIONNAME"
          ],
          [
            "PassageDetectionDirection  N",
            "OPTIONNAME"
          ],
          [
            "PassageDetectionDirection  NE",
            "OPTIONNAME"
          ],
          [
            "PassageDetectionDirection  E",
            "OPTIONNAME"
          ],
          [
            "PassageDetectionDirection  SE",
            "OPTIONNAME"
          ],
          [
            "PassageDetectionDirection  S",
            "OPTIONNAME"
          ],
          [
            "PassageDetectionDirection  SW",
            "OPTIONNAME"
          ],
          [
            "PassageDetectionDirection  W",
            "OPTIONNAME"
          ],
          [
            "PassageDetectionDirection  NW",
            "OPTIONNAME"
          ],
          [
            "PassageDetectionDirection  Direction unknown",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "BedPresenceSensor",
    "message0": "BedPresenceSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "BedPresenceDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "BedPresenceDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "OpenCloseSensor",
    "message0": "OpenCloseSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "DegreeOfOpeningDetectionStatus2  YES",
            "OPTIONNAME"
          ],
          [
            "DegreeOfOpeningDetectionStatus2  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "SnowSensor",
    "message0": "SnowSensor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "SnowDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "SnowDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "HomeAirConditioner",
    "message0": "HomeAirConditioner %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OperatingStatus  ON",
            "OperatingStatus  ON"
          ],
          [
            "OperatingStatus  OFF",
            "OperatingStatus  OFF"
          ],
          [
            "PowerSavingOperationSetting  ON",
            "OPTIONNAME"
          ],
          [
            "PowerSavingOperationSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting  Both the time- and relative time-based reservation functions are ON",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting  Both reservation functions are OFF",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting  Time-based reservation functions is ON",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting  Relative time-based reservation functions is ON",
            "OPTIONNAME"
          ],
          [
            "OffTimerSetting  Both the time- and relative time-based reservation functions are ON",
            "OPTIONNAME"
          ],
          [
            "OffTimerSetting  Both reservation functions are OFF",
            "OPTIONNAME"
          ],
          [
            "OffTimerSetting  Time-based reservation functions is ON",
            "OPTIONNAME"
          ],
          [
            "OffTimerSetting  Relative time-based reservation functions is ON",
            "OPTIONNAME"
          ],
          [
            "AutomaticControlOfAirFlowDirectionSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "AutomaticControlOfAirFlowDirectionSetting  Non Auto",
            "OPTIONNAME"
          ],
          [
            "AutomaticControlOfAirFlowDirectionSetting  Auto(vertical)",
            "OPTIONNAME"
          ],
          [
            "AutomaticControlOfAirFlowDirectionSetting  Auto(horizontal)",
            "OPTIONNAME"
          ],
          [
            "AutomaticSwingOfAirFlowSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "AutomaticSwingOfAirFlowSetting  Vertical",
            "OPTIONNAME"
          ],
          [
            "AutomaticSwingOfAirFlowSetting  Holizontal",
            "OPTIONNAME"
          ],
          [
            "AutomaticSwingOfAirFlowSetting  Vertical and Holizontal",
            "OPTIONNAME"
          ],
          [
            "AirFlowDirection(vertical)Setting  Uppermost",
            "OPTIONNAME"
          ],
          [
            "AirFlowDirection(vertical)Setting  Lowermost",
            "OPTIONNAME"
          ],
          [
            "AirFlowDirection(vertical)Setting  Central",
            "OPTIONNAME"
          ],
          [
            "AirFlowDirection(vertical)Setting  Midpoint between uppermost and central",
            "OPTIONNAME"
          ],
          [
            "AirFlowDirection(vertical)Setting  Midpoint between lowermost and central",
            "OPTIONNAME"
          ],
          [
            "AirFlowDirection(horizontal)Setting  Rightward",
            "OPTIONNAME"
          ],
          [
            "AirFlowDirection(horizontal)Setting  Leftward",
            "OPTIONNAME"
          ],
          [
            "AirFlowDirection(horizontal)Setting  Central",
            "OPTIONNAME"
          ],
          [
            "AirFlowDirection(horizontal)Setting  Rightward and leftward",
            "OPTIONNAME"
          ],
          [
            "SpecialState  Normal operation",
            "OPTIONNAME"
          ],
          [
            "SpecialState  Defrosting",
            "OPTIONNAME"
          ],
          [
            "SpecialState  Preheating",
            "OPTIONNAME"
          ],
          [
            "SpecialState  Heat removal",
            "OPTIONNAME"
          ],
          [
            "NonPriorityState  Normal",
            "OPTIONNAME"
          ],
          [
            "NonPriorityState  Non-priority",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Cooling",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Heating",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Dehumidification",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Air circulation",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Other",
            "OPTIONNAME"
          ],
          [
            "AutomaticTemperatureControlSetting  ON",
            "OPTIONNAME"
          ],
          [
            "AutomaticTemperatureControlSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "NormalHighspeedSilentOperationSetting  Normal",
            "OPTIONNAME"
          ],
          [
            "NormalHighspeedSilentOperationSetting  High speed",
            "OPTIONNAME"
          ],
          [
            "NormalHighspeedSilentOperationSetting  Silent",
            "OPTIONNAME"
          ],
          [
            "SetTemperatureValue  Undefined",
            "OPTIONNAME"
          ],
          [
            "SetTemperatureValueInCoolingMode  Undefined",
            "OPTIONNAME"
          ],
          [
            "SetTemperatureValueInHeatingMode  Undefined",
            "OPTIONNAME"
          ],
          [
            "SetTemperatureValueInDehumidifyingMode  Undefined",
            "OPTIONNAME"
          ],
          [
            "MeasuredCooledAirTemperature  Undefined",
            "OPTIONNAME"
          ],
          [
            "MeasuredOutdoorAirTemperature  Undefined",
            "OPTIONNAME"
          ],
          [
            "RelativeTemperatureSetting  Undefined",
            "OPTIONNAME"
          ],
          [
            "VentilationFunctionSetting  Ventilation function ON(outlet direction)",
            "OPTIONNAME"
          ],
          [
            "VentilationFunctionSetting  Ventilation function OFF",
            "OPTIONNAME"
          ],
          [
            "VentilationFunctionSetting  Ventilation function ON(intake direction)",
            "OPTIONNAME"
          ],
          [
            "VentilationFunctionSetting  Ventilation function ON(outlet and intake direction)",
            "OPTIONNAME"
          ],
          [
            "HumidifierFunctionSetting  ON",
            "OPTIONNAME"
          ],
          [
            "HumidifierFunctionSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "VentilationAirFlowRateSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "DegreeOfHumidificationSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "SpecialFunctionSetting  No setting",
            "OPTIONNAME"
          ],
          [
            "SpecialFunctionSetting  Clothes dryer function",
            "OPTIONNAME"
          ],
          [
            "SpecialFunctionSetting  Condensation suppressorfunction",
            "OPTIONNAME"
          ],
          [
            "SpecialFunctionSetting  Mite and mold control function",
            "OPTIONNAME"
          ],
          [
            "SpecialFunctionSetting  Active defrosting function",
            "OPTIONNAME"
          ],
          [
            "AirPurificationModeSetting  ON",
            "OPTIONNAME"
          ],
          [
            "AirPurificationModeSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "Buzzer  Buzzer sound generation",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "VentilationFan",
    "message0": "VentilationFan %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "AirFlowRateSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "VentilationAutoSetting  ON",
            "OPTIONNAME"
          ],
          [
            "VentilationAutoSetting  OFF",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "AirConditionerVentilationFan",
    "message0": "AirConditionerVentilationFan %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "SetValueOfVentilationAirFlowRate  Automatic",
            "OPTIONNAME"
          ],
          [
            "VentilationModeAutomaticModeSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "VentilationModeAutomaticModeSetting  Non-automatic",
            "OPTIONNAME"
          ],
          [
            "VentilationMethodSetting  Blowing ventilation ",
            "OPTIONNAME"
          ],
          [
            "VentilationMethodSetting  Air conditioning ventilation",
            "OPTIONNAME"
          ],
          [
            "VentilationModeSetting  normal",
            "OPTIONNAME"
          ],
          [
            "VentilationModeSetting  heat-exchange",
            "OPTIONNAME"
          ],
          [
            "VentilationModeSetting  cooling",
            "OPTIONNAME"
          ],
          [
            "VentilationModeSetting  heating",
            "OPTIONNAME"
          ],
          [
            "VentilationModeSetting  dehumidifying",
            "OPTIONNAME"
          ],
          [
            "VentilationModeSetting  humidifying",
            "OPTIONNAME"
          ],
          [
            "VentilationModeSetting  other",
            "OPTIONNAME"
          ],
          [
            "VentilationAutoSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "VentilationAutoSetting  Non-automatic",
            "OPTIONNAME"
          ],
          [
            "Smoke(cigarette)DetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "Smoke(cigarette)DetectionStatus  NO",
            "OPTIONNAME"
          ],
          [
            "PollutionDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "PollutionDetectionStatus  NO",
            "OPTIONNAME"
          ],
          [
            "HeatExchangerOperationSetting  ON",
            "OPTIONNAME"
          ],
          [
            "HeatExchangerOperationSetting  OFF",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "AirCleaner",
    "message0": "AirCleaner %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "AirFlowRateSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "AirPollutionDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "AirPollutionDetectionStatus  NO",
            "OPTIONNAME"
          ],
          [
            "SmokeDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "SmokeDetectionStatus  NO",
            "OPTIONNAME"
          ],
          [
            "OpticalCatalystOperationSetting  ON",
            "OPTIONNAME"
          ],
          [
            "OpticalCatalystOperationSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "FilterChangeNotice  YES",
            "OPTIONNAME"
          ],
          [
            "FilterChangeNotice  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "Humidifier",
    "message0": "Humidifier %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "ReservationSetOfOffTimer  ON",
            "OPTIONNAME"
          ],
          [
            "ReservationSetOfOffTimer  OFF",
            "OPTIONNAME"
          ],
          [
            "IonEmissionSetting  ON",
            "OPTIONNAME"
          ],
          [
            "IonEmissionSetting  OFF",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "ElectricHeater",
    "message0": "ElectricHeater %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OnTimerSetting  ON",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "OffTimerSetting  ON",
            "OPTIONNAME"
          ],
          [
            "OffTimerSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "AirFlowRateSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "AutomaticTemperatureControlSetting  ON",
            "OPTIONNAME"
          ],
          [
            "AutomaticTemperatureControlSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "SetTemperatureValue  Undefined",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "FanHeater",
    "message0": "FanHeater %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OnTimerSetting  Both the time- and relative time-based reservation functions are ON",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting  Both reservation functions are OFF",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting  Time-based reservation functions is ON",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting  Relative time-based reservation functions is ON",
            "OPTIONNAME"
          ],
          [
            "OffTimerSetting  Both the time- and relative time-based reservation functions are ON",
            "OPTIONNAME"
          ],
          [
            "OffTimerSetting  Both reservation functions are OFF",
            "OPTIONNAME"
          ],
          [
            "OffTimerSetting  Time-based reservation functions is ON",
            "OPTIONNAME"
          ],
          [
            "OffTimerSetting  Relative time-based reservation functions is ON",
            "OPTIONNAME"
          ],
          [
            "AutomaticTemperatureControlSetting  ON",
            "OPTIONNAME"
          ],
          [
            "AutomaticTemperatureControlSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "MeasuredTemperature  Undefined",
            "OPTIONNAME"
          ],
          [
            "ExtensionalOperationSetting  ON",
            "OPTIONNAME"
          ],
          [
            "ExtensionalOperationSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "IonEmissionSetting  ON",
            "OPTIONNAME"
          ],
          [
            "IonEmissionSetting  OFF",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "ElectricStorageHeater",
    "message0": "ElectricStorageHeater %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "AirFlowRateSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "AirFlowRateSetting  Low",
            "OPTIONNAME"
          ],
          [
            "AirFlowRateSetting  High",
            "OPTIONNAME"
          ],
          [
            "AirFlowRateSetting  Auto",
            "OPTIONNAME"
          ],
          [
            "FanOperationStatus  OFF",
            "OPTIONNAME"
          ],
          [
            "FanOperationStatus  Low",
            "OPTIONNAME"
          ],
          [
            "FanOperationStatus  High",
            "OPTIONNAME"
          ],
          [
            "HeatStorageOperationStatus  ON",
            "OPTIONNAME"
          ],
          [
            "HeatStorageOperationStatus  OFF",
            "OPTIONNAME"
          ],
          [
            "DaytimeHeatStorageSetting  ON",
            "OPTIONNAME"
          ],
          [
            "DaytimeHeatStorageSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "DaytimeHeatStorageAbility  YES",
            "OPTIONNAME"
          ],
          [
            "DaytimeHeatStorageAbility  NO",
            "OPTIONNAME"
          ],
          [
            "RadiationMethod  YES",
            "OPTIONNAME"
          ],
          [
            "RadiationMethod  NO",
            "OPTIONNAME"
          ],
          [
            "ChildLockSetting  YES",
            "OPTIONNAME"
          ],
          [
            "ChildLockSetting  NO",
            "OPTIONNAME"
          ],
          [
            "FanTimer1Setting  YES",
            "OPTIONNAME"
          ],
          [
            "FanTimer1Setting  NO",
            "OPTIONNAME"
          ],
          [
            "FanTimer2Setting  YES",
            "OPTIONNAME"
          ],
          [
            "FanTimer2Setting  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "PackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)",
    "message0": "PackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities) %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "ThermostatState  YES",
            "OPTIONNAME"
          ],
          [
            "ThermostatState  NO",
            "OPTIONNAME"
          ],
          [
            "CurrentFunction(automaticOperationMode)  Other",
            "OPTIONNAME"
          ],
          [
            "CurrentFunction(automaticOperationMode)  Cooling",
            "OPTIONNAME"
          ],
          [
            "CurrentFunction(automaticOperationMode)  Heating",
            "OPTIONNAME"
          ],
          [
            "CurrentFunction(automaticOperationMode)  Dehumidification",
            "OPTIONNAME"
          ],
          [
            "CurrentFunction(automaticOperationMode)  Air circulation",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Cooling",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Heating",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Dehumidification",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Air circulation",
            "OPTIONNAME"
          ],
          [
            "PowerConsumptionRangeForIndoorUnits  Unknown",
            "OPTIONNAME"
          ],
          [
            "PowerConsumptionRangeForIndoorUnits  Less than 50W",
            "OPTIONNAME"
          ],
          [
            "PowerConsumptionRangeForIndoorUnits  50W-100W",
            "OPTIONNAME"
          ],
          [
            "PowerConsumptionRangeForIndoorUnits  100W-150W",
            "OPTIONNAME"
          ],
          [
            "PowerConsumptionRangeForIndoorUnits  150W-200W",
            "OPTIONNAME"
          ],
          [
            "PowerConsumptionRangeForIndoorUnits  Equal to or more than 200W",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "PackageTypeCommercialAirConditioner(outdoorUnit)",
    "message0": "PackageTypeCommercialAirConditioner(outdoorUnit) %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "SpecialState  YES",
            "OPTIONNAME"
          ],
          [
            "SpecialState  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "GasHeatPumpTypeCommercialAirConditioner(indoorUnit)",
    "message0": "GasHeatPumpTypeCommercialAirConditioner(indoorUnit) %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "ThermoStatus  YES",
            "OPTIONNAME"
          ],
          [
            "ThermoStatus  NO",
            "OPTIONNAME"
          ],
          [
            "OperationModeStatusDuringAutoOperation  Other",
            "OPTIONNAME"
          ],
          [
            "OperationModeStatusDuringAutoOperation  Cooling",
            "OPTIONNAME"
          ],
          [
            "OperationModeStatusDuringAutoOperation  Heating",
            "OPTIONNAME"
          ],
          [
            "OperationModeStatusDuringAutoOperation  Dehumidification",
            "OPTIONNAME"
          ],
          [
            "OperationModeStatusDuringAutoOperation  Air circulation",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Cooling",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Heating",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Dehumidification",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Air circulation",
            "OPTIONNAME"
          ],
          [
            "PowerConsumptionRangeForIndoorUnits  Unknown",
            "OPTIONNAME"
          ],
          [
            "PowerConsumptionRangeForIndoorUnits  Less than 50W",
            "OPTIONNAME"
          ],
          [
            "PowerConsumptionRangeForIndoorUnits  50W-100W",
            "OPTIONNAME"
          ],
          [
            "PowerConsumptionRangeForIndoorUnits  100W-150W",
            "OPTIONNAME"
          ],
          [
            "PowerConsumptionRangeForIndoorUnits  150W-200W",
            "OPTIONNAME"
          ],
          [
            "PowerConsumptionRangeForIndoorUnits  Equal to or more than 200W",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "RangeHood",
    "message0": "RangeHood %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "VentilationAirFlowRateSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "RangeHoodAutomaticSetting  YES",
            "OPTIONNAME"
          ],
          [
            "RangeHoodAutomaticSetting  NO",
            "OPTIONNAME"
          ],
          [
            "HumanDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "HumanDetectionStatus  NO",
            "OPTIONNAME"
          ],
          [
            "GasDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "GasDetectionStatus  NO",
            "OPTIONNAME"
          ],
          [
            "ErrorDetectionMode  Motor Error",
            "OPTIONNAME"
          ],
          [
            "ErrorDetectionMode  Current Plate Detection",
            "OPTIONNAME"
          ],
          [
            "ErrorDetectionMode  Normal",
            "OPTIONNAME"
          ],
          [
            "ErrorDetectionMode  Other",
            "OPTIONNAME"
          ],
          [
            "LightingOperationSetting  Lighting",
            "OPTIONNAME"
          ],
          [
            "LightingOperationSetting  Lights-out",
            "OPTIONNAME"
          ],
          [
            "LightingOperationSetting  Flicker ",
            "OPTIONNAME"
          ],
          [
            "LightSourceColorSetting  Incandescent lamp color",
            "OPTIONNAME"
          ],
          [
            "LightSourceColorSetting  White",
            "OPTIONNAME"
          ],
          [
            "LightSourceColorSetting  Daylight white",
            "OPTIONNAME"
          ],
          [
            "LightSourceColorSetting  Daylight color",
            "OPTIONNAME"
          ],
          [
            "LightSourceColorSetting  Other",
            "OPTIONNAME"
          ],
          [
            "LightingModeSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "LightingModeSetting  Normal Lighting",
            "OPTIONNAME"
          ],
          [
            "LightingModeSetting  Color Lighting",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "ElectricallyOperatedShade",
    "message0": "ElectricallyOperatedShade %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OpenCloseSetting  Open",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting  Close",
            "OPTIONNAME"
          ],
          [
            "BlindOpenCloseSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "BlindOpenCloseSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "BlindOpenCloseSpeedSetting  High",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "ElectricallyOperatedBlindShade",
    "message0": "ElectricallyOperatedBlindShade %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "TimerOperationSetting  ON",
            "OPTIONNAME"
          ],
          [
            "TimerOperationSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "WindDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "WindDetectionStatus  NO",
            "OPTIONNAME"
          ],
          [
            "SunlightDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "SunlightDetectionStatus  NO",
            "OPTIONNAME"
          ],
          [
            "Opening(extention)SpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "Opening(extention)SpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "Opening(extention)SpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "Closing(retraction)SpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "Closing(retraction)SpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "Closing(retraction)SpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "AutomaticOperationSetting  ON",
            "OPTIONNAME"
          ],
          [
            "AutomaticOperationSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "OpenClose(extensionRetraction)Setting  Open",
            "OPTIONNAME"
          ],
          [
            "OpenClose(extensionRetraction)Setting  Close",
            "OPTIONNAME"
          ],
          [
            "OpenClose(extensionRetraction)Setting  Stop",
            "OPTIONNAME"
          ],
          [
            "OpenClose(extensionRetraction)SpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OpenClose(extensionRetraction)SpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OpenClose(extensionRetraction)SpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "ElectricLockSetting  Lock",
            "OPTIONNAME"
          ],
          [
            "ElectricLockSetting  Unlock",
            "OPTIONNAME"
          ],
          [
            "RemoteOperationSettingStatus  ON(permitted)",
            "OPTIONNAME"
          ],
          [
            "RemoteOperationSettingStatus  OFF(prohibited)",
            "OPTIONNAME"
          ],
          [
            "SelectiveOpening(extention)OperationSetting  Degree-of-setting position: Open",
            "OPTIONNAME"
          ],
          [
            "SelectiveOpening(extention)OperationSetting  Operation time setting value: Open",
            "OPTIONNAME"
          ],
          [
            "SelectiveOpening(extention)OperationSetting  Operation time setting value: Close",
            "OPTIONNAME"
          ],
          [
            "SelectiveOpening(extention)OperationSetting  Local setting position",
            "OPTIONNAME"
          ],
          [
            "OpenClosed(extensionRetraction)Status  Fully open",
            "OPTIONNAME"
          ],
          [
            "OpenClosed(extensionRetraction)Status  Fully closed",
            "OPTIONNAME"
          ],
          [
            "OpenClosed(extensionRetraction)Status  Open",
            "OPTIONNAME"
          ],
          [
            "OpenClosed(extensionRetraction)Status  Closed",
            "OPTIONNAME"
          ],
          [
            "OpenClosed(extensionRetraction)Status  Stopped halfway",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpening(extension)SpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpening(extension)SpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpening(extension)SpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpening(extension)SpeedSetting  None",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosing(retraction)SpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosing(retraction)SpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosing(retraction)SpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosing(retraction)SpeedSetting  None",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "ElectricallyOperatedShutter",
    "message0": "ElectricallyOperatedShutter %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "TimerOperationSetting  ON",
            "OPTIONNAME"
          ],
          [
            "TimerOperationSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "OpeningSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OpeningSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OpeningSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "ClosingSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "ClosingSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "ClosingSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "OpeningClosingSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OpeningClosingSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OpeningClosingSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "ElectricLockSetting  Lock",
            "OPTIONNAME"
          ],
          [
            "ElectricLockSetting  Unlock",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting2  Open",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting2  Close",
            "OPTIONNAME"
          ],
          [
            "RemoteOperationSettingStatus  ON(permitted)",
            "OPTIONNAME"
          ],
          [
            "RemoteOperationSettingStatus  OFF(prohibited)",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Degree-of-setting position: Open",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Operation time setting value: Open",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Operation time setting value: Close",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Local setting position",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Slit degree-of-opning setting",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Fully open",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Fully closed",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Opening",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Closing",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Stopped halfway",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  None",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  None",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "ElectricallyOperatedRainSlidingDoorShutter",
    "message0": "ElectricallyOperatedRainSlidingDoorShutter %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OpenCloseSetting1  Open",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting1  Close",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting1  Stop",
            "OPTIONNAME"
          ],
          [
            "OpeningClosingSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OpeningClosingSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OpeningClosingSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "ElectricLockSetting  Lock",
            "OPTIONNAME"
          ],
          [
            "ElectricLockSetting  Unlock",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting2  Open",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting2  Close",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "ElectricallyOperatedRainSlidingDoorShutter",
    "message0": "ElectricallyOperatedRainSlidingDoorShutter %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "TimerOperationSetting  ON",
            "OPTIONNAME"
          ],
          [
            "TimerOperationSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "OpeningSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OpeningSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OpeningSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "ClosingSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "ClosingSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "ClosingSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting  Open",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting  Close",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting  Stop",
            "OPTIONNAME"
          ],
          [
            "OpeningClosingSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OpeningClosingSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OpeningClosingSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "ElectricLockSetting  Lock",
            "OPTIONNAME"
          ],
          [
            "ElectricLockSetting  Unlock",
            "OPTIONNAME"
          ],
          [
            "RemoteOperationSettingStatus  ON(permitted)",
            "OPTIONNAME"
          ],
          [
            "RemoteOperationSettingStatus  OFF(prohibited)",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Degree-of-setting position: Open",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Operation time setting value: Open",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Operation time setting value: Close",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Local setting position",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Slit degree-of-opning setting",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Fully open",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Fully closed",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Opening",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Closing",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Stopped halfway",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  None",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  None",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "ElectricallyOperatedGate",
    "message0": "ElectricallyOperatedGate %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OpeningSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OpeningSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OpeningSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "ClosingSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "ClosingSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "ClosingSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting  Open",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting  Close",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting  Stop",
            "OPTIONNAME"
          ],
          [
            "OpeningClosingSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OpeningClosingSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OpeningClosingSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "ElectricLockSetting  Lock",
            "OPTIONNAME"
          ],
          [
            "ElectricLockSetting  Unlock",
            "OPTIONNAME"
          ],
          [
            "RemoteOperationSettingStatus  ON(permitted)",
            "OPTIONNAME"
          ],
          [
            "RemoteOperationSettingStatus  OFF(prohibited)",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Degree-of-setting position: Open",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Operation time setting value: Open",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Operation time setting value: Close",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Local setting position",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Fully open",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Fully closed",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Opening",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Closing",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Stopped halfway",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  None",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  None",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "ElectricallyOperatedWindow",
    "message0": "ElectricallyOperatedWindow %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "TimerOperationSetting  ON",
            "OPTIONNAME"
          ],
          [
            "TimerOperationSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "RegisteredTemperatureDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "RegisteredTemperatureDetectionStatus  NO",
            "OPTIONNAME"
          ],
          [
            "RainDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "RainDetectionStatus  NO",
            "OPTIONNAME"
          ],
          [
            "OpeningSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OpeningSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OpeningSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "ClosingSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "ClosingSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "ClosingSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "AutomaticOperationSetting  ON",
            "OPTIONNAME"
          ],
          [
            "AutomaticOperationSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting  Open",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting  Close",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting  Stop",
            "OPTIONNAME"
          ],
          [
            "OpeningClosingSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OpeningClosingSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OpeningClosingSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "ElectricLockSetting  Lock",
            "OPTIONNAME"
          ],
          [
            "ElectricLockSetting  Unlock",
            "OPTIONNAME"
          ],
          [
            "RemoteOperationSettingStatus  ON(permitted)",
            "OPTIONNAME"
          ],
          [
            "RemoteOperationSettingStatus  OFF(prohibited)",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Degree-of-setting position: Open",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Operation time setting value: Open",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Operation time setting value: Close",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Local setting position",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Fully open",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Fully closed",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Opening",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Closing",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Stopped halfway",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  None",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  None",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "AutomaticallyOperatedEntranceDoorSlidingDoor",
    "message0": "AutomaticallyOperatedEntranceDoorSlidingDoor %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OpeningSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OpeningSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OpeningSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "ClosingSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "ClosingSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "ClosingSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting  Open",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting  Close",
            "OPTIONNAME"
          ],
          [
            "OpenCloseSetting  Stop",
            "OPTIONNAME"
          ],
          [
            "OpeningClosingSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OpeningClosingSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OpeningClosingSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "RemoteOperationSettingStatus  ON(permitted)",
            "OPTIONNAME"
          ],
          [
            "RemoteOperationSettingStatus  OFF(prohibited)",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Degree-of-setting position: Open",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Operation time setting value: Open",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Operation time setting value: Close",
            "OPTIONNAME"
          ],
          [
            "SelectiveDegreeOfOpeningSetting  Local setting position",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Fully open",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Fully closed",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Opening",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Closing",
            "OPTIONNAME"
          ],
          [
            "OpenClosedStatus  Stopped halfway",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "OneTimeOpeningSpeedSetting  None",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  Low",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  Middle",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  High",
            "OPTIONNAME"
          ],
          [
            "OneTimeClosingSpeedSetting  None",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "GardenSprinkler",
    "message0": "GardenSprinkler %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "SprinkleValveOpenCloseSetting  automatic ON",
            "OPTIONNAME"
          ],
          [
            "SprinkleValveOpenCloseSetting  manual ON",
            "OPTIONNAME"
          ],
          [
            "SprinkleValveOpenCloseSetting  manual OFF",
            "OPTIONNAME"
          ],
          [
            "SprinkleIntervalSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "SprinkleIntervalSetting  daily",
            "OPTIONNAME"
          ],
          [
            "SprinkleIntervalSetting  every other day",
            "OPTIONNAME"
          ],
          [
            "SprinkleIntervalSetting  every 3 days",
            "OPTIONNAME"
          ],
          [
            "SprinkleIntervalSetting  once a week",
            "OPTIONNAME"
          ],
          [
            "NumberOfSprinklesSetting  first ON",
            "OPTIONNAME"
          ],
          [
            "NumberOfSprinklesSetting  second ON",
            "OPTIONNAME"
          ],
          [
            "NumberOfSprinklesSetting  both ON",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "ElectricWaterHeater",
    "message0": "ElectricWaterHeater %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OnTimerSetting  ON",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "AutomaticWaterTemperatureControlSetting  ON",
            "OPTIONNAME"
          ],
          [
            "AutomaticWaterTemperatureControlSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "WaterHeatingTemperatureSetting  Undefined",
            "OPTIONNAME"
          ],
          [
            "TankOperationModeSetting  Standard",
            "OPTIONNAME"
          ],
          [
            "TankOperationModeSetting  Saving",
            "OPTIONNAME"
          ],
          [
            "TankOperationModeSetting  Extra",
            "OPTIONNAME"
          ],
          [
            "HotWaterSupplyStatus  YES",
            "OPTIONNAME"
          ],
          [
            "HotWaterSupplyStatus  NO",
            "OPTIONNAME"
          ],
          [
            "ParticipationInEnergyShift  Participation",
            "OPTIONNAME"
          ],
          [
            "ParticipationInEnergyShift  Non Participation",
            "OPTIONNAME"
          ],
          [
            "MuteSetting  ON",
            "OPTIONNAME"
          ],
          [
            "MuteSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "AutomaticBathWaterHeatingModeSetting  ON",
            "OPTIONNAME"
          ],
          [
            "AutomaticBathWaterHeatingModeSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "ManualBathReheatingOperationSetting  ON",
            "OPTIONNAME"
          ],
          [
            "ManualBathReheatingOperationSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "BathroomPriporitySetting  ON",
            "OPTIONNAME"
          ],
          [
            "BathroomPriporitySetting  OFF",
            "OPTIONNAME"
          ],
          [
            "BathOperationStatusMonitor  Running Hot Water",
            "OPTIONNAME"
          ],
          [
            "BathOperationStatusMonitor  No Operation",
            "OPTIONNAME"
          ],
          [
            "BathOperationStatusMonitor  Keeping Temperature",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "BidetQuippedToilet(withElectricallyWarmedSeat)",
    "message0": "BidetQuippedToilet(withElectricallyWarmedSeat) %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "HeaterSettingOfToiletSeat  ON",
            "OPTIONNAME"
          ],
          [
            "HeaterSettingOfToiletSeat  OFF",
            "OPTIONNAME"
          ],
          [
            "TemporalHaltSettingOfToiletSeat  Continuous",
            "OPTIONNAME"
          ],
          [
            "TemporalHaltSettingOfToiletSeat  Once",
            "OPTIONNAME"
          ],
          [
            "TemporalHaltSettingOfToiletSeat  No setting",
            "OPTIONNAME"
          ],
          [
            "TemperatureLevelSettingOfRoomHeating  Low",
            "OPTIONNAME"
          ],
          [
            "TemperatureLevelSettingOfRoomHeating  Medium",
            "OPTIONNAME"
          ],
          [
            "TemperatureLevelSettingOfRoomHeating  High",
            "OPTIONNAME"
          ],
          [
            "RoomHeatingSetting  ON",
            "OPTIONNAME"
          ],
          [
            "RoomHeatingSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "RoomHeatingSetting  Timer mode",
            "OPTIONNAME"
          ],
          [
            "RoomHeatingStatus  YES",
            "OPTIONNAME"
          ],
          [
            "RoomHeatingStatus  NO",
            "OPTIONNAME"
          ],
          [
            "SpecialOperationModeSetting  No setting",
            "OPTIONNAME"
          ],
          [
            "SpecialOperationModeSetting  Over-cool prevention",
            "OPTIONNAME"
          ],
          [
            "HumanDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "HumanDetectionStatus  NO",
            "OPTIONNAME"
          ],
          [
            "SeatingDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "SeatingDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "ElectricKey",
    "message0": "ElectricKey %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "LockSetting1  Lock",
            "OPTIONNAME"
          ],
          [
            "LockSetting1  Unlock",
            "OPTIONNAME"
          ],
          [
            "LockSetting2  Lock",
            "OPTIONNAME"
          ],
          [
            "LockSetting2  Unlock",
            "OPTIONNAME"
          ],
          [
            "LockStatusOfDoorGuard  Lock",
            "OPTIONNAME"
          ],
          [
            "LockStatusOfDoorGuard  Unlock",
            "OPTIONNAME"
          ],
          [
            "DoorOpenCloseStatus  Open",
            "OPTIONNAME"
          ],
          [
            "DoorOpenCloseStatus  Close",
            "OPTIONNAME"
          ],
          [
            "OccupantNonOccupantStatus  occupant",
            "OPTIONNAME"
          ],
          [
            "OccupantNonOccupantStatus  non-occupant",
            "OPTIONNAME"
          ],
          [
            "AlarmStatus  Normal(no alarm)",
            "OPTIONNAME"
          ],
          [
            "AlarmStatus  break open",
            "OPTIONNAME"
          ],
          [
            "AlarmStatus  door open",
            "OPTIONNAME"
          ],
          [
            "AlarmStatus  manual unlocked",
            "OPTIONNAME"
          ],
          [
            "AlarmStatus  tampered",
            "OPTIONNAME"
          ],
          [
            "AutoLockModeSetting  ON",
            "OPTIONNAME"
          ],
          [
            "AutoLockModeSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "BatteryLevel  Ordinary level",
            "OPTIONNAME"
          ],
          [
            "BatteryLevel  Notification of battery replacement",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "InstantaneousWaterHeater",
    "message0": "InstantaneousWaterHeater %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OnTimerSetting  ON",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "HotWaterHeatingStatus  YES",
            "OPTIONNAME"
          ],
          [
            "HotWaterHeatingStatus  NO",
            "OPTIONNAME"
          ],
          [
            "HotWaterWarmerSetting  ON",
            "OPTIONNAME"
          ],
          [
            "HotWaterWarmerSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "MuteSetting  ON",
            "OPTIONNAME"
          ],
          [
            "MuteSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "BathWaterHeaterStatus  YES",
            "OPTIONNAME"
          ],
          [
            "BathWaterHeaterStatus  NO",
            "OPTIONNAME"
          ],
          [
            "BathAutoModeSetting  ON",
            "OPTIONNAME"
          ],
          [
            "BathAutoModeSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "BathAdditionalBoilUpOperationSetting  ON",
            "OPTIONNAME"
          ],
          [
            "BathAdditionalBoilUpOperationSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "BathHotWaterAddingOperationSetting  ON",
            "OPTIONNAME"
          ],
          [
            "BathHotWaterAddingOperationSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "BathWaterTemperatureLoweringOperationSetting  ON",
            "OPTIONNAME"
          ],
          [
            "BathWaterTemperatureLoweringOperationSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "ShowerHotWaterSupplyStatus  YES",
            "OPTIONNAME"
          ],
          [
            "ShowerHotWaterSupplyStatus  NO",
            "OPTIONNAME"
          ],
          [
            "KitchenHotWaterSupplyStatus  YES",
            "OPTIONNAME"
          ],
          [
            "KitchenHotWaterSupplyStatus  NO",
            "OPTIONNAME"
          ],
          [
            "HotWaterWarmerOnTimerReservationSetting  ON",
            "OPTIONNAME"
          ],
          [
            "HotWaterWarmerOnTimerReservationSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "BathOperationStatusMonitor  Running Hot Water",
            "OPTIONNAME"
          ],
          [
            "BathOperationStatusMonitor  No Operation",
            "OPTIONNAME"
          ],
          [
            "BathOperationStatusMonitor  Keeping Temperature",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "BathroomHeaterAndDryer",
    "message0": "BathroomHeaterAndDryer %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OnTimerSetting1  ON",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting1  OFF",
            "OPTIONNAME"
          ],
          [
            "OffTimerSetting  ON",
            "OPTIONNAME"
          ],
          [
            "OffTimerSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "VentilationOperationSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "VentilationOperationSetting  Standard",
            "OPTIONNAME"
          ],
          [
            "BathroomHeaterOperationSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "BathroomHeaterOperationSetting  Standard",
            "OPTIONNAME"
          ],
          [
            "BathroomDryerOperationSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "BathroomDryerOperationSetting  Standard",
            "OPTIONNAME"
          ],
          [
            "CoolAirCirculatorOperationSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "CoolAirCirculatorOperationSetting  Standard",
            "OPTIONNAME"
          ],
          [
            "MistSaunaOperationSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "MistSaunaOperationSetting  Standard",
            "OPTIONNAME"
          ],
          [
            "WaterMistOperationSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "WaterMistOperationSetting  Standard",
            "OPTIONNAME"
          ],
          [
            "VentilationAirFlowRateSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "FilterCleaningReminderSignSetting  Lit",
            "OPTIONNAME"
          ],
          [
            "FilterCleaningReminderSignSetting  Not Lit",
            "OPTIONNAME"
          ],
          [
            "HumanBodyDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "HumanBodyDetectionStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "HouseholdSolarPowerGeneration",
    "message0": "HouseholdSolarPowerGeneration %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "FunctionToControlPurchaseSurplusElectricitySetting  ON",
            "OPTIONNAME"
          ],
          [
            "FunctionToControlPurchaseSurplusElectricitySetting  OFF",
            "OPTIONNAME"
          ],
          [
            "FunctionToControlTheTypeOfSurplusElectricityPurchase  Valid",
            "OPTIONNAME"
          ],
          [
            "FunctionToControlTheTypeOfSurplusElectricityPurchase  Invalid",
            "OPTIONNAME"
          ],
          [
            "FitContractType  FIT",
            "OPTIONNAME"
          ],
          [
            "FitContractType  Non-FIT",
            "OPTIONNAME"
          ],
          [
            "FitContractType  No setting",
            "OPTIONNAME"
          ],
          [
            "SelfConsumptionType  With self-consumption",
            "OPTIONNAME"
          ],
          [
            "SelfConsumptionType  Without self-consumption",
            "OPTIONNAME"
          ],
          [
            "SelfConsumptionType  Unknown",
            "OPTIONNAME"
          ],
          [
            "OutputPowerRestraintStatus  Ongoing restraint (output power control)",
            "OPTIONNAME"
          ],
          [
            "OutputPowerRestraintStatus  Ongoing restraint (except output power control)",
            "OPTIONNAME"
          ],
          [
            "OutputPowerRestraintStatus  Ongoing restraint (reason for restraint is unknown)",
            "OPTIONNAME"
          ],
          [
            "OutputPowerRestraintStatus  Not restraining",
            "OPTIONNAME"
          ],
          [
            "OutputPowerRestraintStatus  Unknown",
            "OPTIONNAME"
          ],
          [
            "ResettingCumulativeAmountOfElectricEnergyGenerated  Reset",
            "OPTIONNAME"
          ],
          [
            "ResettingCumulativeAmountOfElectricEnergySold  Reset",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "HotWaterHeatSourceEquipment",
    "message0": "HotWaterHeatSourceEquipment %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OnTimerSetting  ON",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "OffTimerSetting  ON",
            "OPTIONNAME"
          ],
          [
            "OffTimerSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Heating",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Cooling",
            "OPTIONNAME"
          ],
          [
            "WaterTemperature1  Automatic",
            "OPTIONNAME"
          ],
          [
            "WaterTemperature2  Automatic",
            "OPTIONNAME"
          ],
          [
            "MeasuredTemperatureOfOutwardWater(exitWaterTemperature)  Undefined",
            "OPTIONNAME"
          ],
          [
            "MeasuredTemperatureOfInwardWater(entranceWaterTemperature)  Undefined",
            "OPTIONNAME"
          ],
          [
            "SpecialOperationSetting  Normal",
            "OPTIONNAME"
          ],
          [
            "SpecialOperationSetting  Modest",
            "OPTIONNAME"
          ],
          [
            "SpecialOperationSetting  High power",
            "OPTIONNAME"
          ],
          [
            "DailyTimerSetting  Timer OFF",
            "OPTIONNAME"
          ],
          [
            "DailyTimerSetting  timer 1",
            "OPTIONNAME"
          ],
          [
            "DailyTimerSetting  timer 2",
            "OPTIONNAME"
          ],
          [
            "PowerConsumptionMeasurementMethod  Node unit",
            "OPTIONNAME"
          ],
          [
            "PowerConsumptionMeasurementMethod  Class unit",
            "OPTIONNAME"
          ],
          [
            "PowerConsumptionMeasurementMethod  Instance unit",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "FloorHeater",
    "message0": "FloorHeater %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OnTimerSetting  ON",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "OffTimerSetting  ON",
            "OPTIONNAME"
          ],
          [
            "OffTimerSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "Temperature1  Automatic",
            "OPTIONNAME"
          ],
          [
            "Temperature2  Automatic",
            "OPTIONNAME"
          ],
          [
            "MeasuredRoomTemperature  Undefined",
            "OPTIONNAME"
          ],
          [
            "SpecialOperationSetting  Normal operation",
            "OPTIONNAME"
          ],
          [
            "SpecialOperationSetting  Moderate Operation",
            "OPTIONNAME"
          ],
          [
            "SpecialOperationSetting  High power operation",
            "OPTIONNAME"
          ],
          [
            "DailyTimerSetting  Timer off",
            "OPTIONNAME"
          ],
          [
            "DailyTimerSetting  Timer1",
            "OPTIONNAME"
          ],
          [
            "DailyTimerSetting  Timer2",
            "OPTIONNAME"
          ],
          [
            "PowerConsumptionMeasurementMethod  Node unit",
            "OPTIONNAME"
          ],
          [
            "PowerConsumptionMeasurementMethod  Class unit",
            "OPTIONNAME"
          ],
          [
            "PowerConsumptionMeasurementMethod  Instance unit",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "FuelCell",
    "message0": "FuelCell %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OnTimerSetting  ON",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "CumulativePowerGenerationOutputResetSetting  Reset",
            "OPTIONNAME"
          ],
          [
            "CumulativeGasConsumptionResetSetting  Reset",
            "OPTIONNAME"
          ],
          [
            "InHouseCumulativePowerConsumptionReset  Reset",
            "OPTIONNAME"
          ],
          [
            "DesignatedPowerGenerationStatus  Power generation at the max. rating",
            "OPTIONNAME"
          ],
          [
            "DesignatedPowerGenerationStatus  Load following power generation",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "StorageBattery",
    "message0": "StorageBattery %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "ChargingMethod  Maximum charging electric energy charting",
            "OPTIONNAME"
          ],
          [
            "ChargingMethod  Surplus electric energy charging",
            "OPTIONNAME"
          ],
          [
            "ChargingMethod  Designated electric energy charging",
            "OPTIONNAME"
          ],
          [
            "ChargingMethod  Designated current power charging",
            "OPTIONNAME"
          ],
          [
            "ChargingMethod  Others",
            "OPTIONNAME"
          ],
          [
            "DischargingMethod  Maximum discharge electric energy discharging",
            "OPTIONNAME"
          ],
          [
            "DischargingMethod  Load following discharge",
            "OPTIONNAME"
          ],
          [
            "DischargingMethod  Designated electric energy discharging",
            "OPTIONNAME"
          ],
          [
            "DischargingMethod  Designated current power discharging",
            "OPTIONNAME"
          ],
          [
            "DischargingMethod  Others",
            "OPTIONNAME"
          ],
          [
            "ReInterconnectionPermissionSetting  ON",
            "OPTIONNAME"
          ],
          [
            "ReInterconnectionPermissionSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "OperationPermissionSetting  ON",
            "OPTIONNAME"
          ],
          [
            "OperationPermissionSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "IndependentOperationPermissionSetting  ON",
            "OPTIONNAME"
          ],
          [
            "IndependentOperationPermissionSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "MeasuredCumulativeDischargingElectricEnergyResetSetting  Reset",
            "OPTIONNAME"
          ],
          [
            "MeasuredCumulativeChargingElectricEnergyResetSetting  Reset",
            "OPTIONNAME"
          ],
          [
            "BatteryType  unknown",
            "OPTIONNAME"
          ],
          [
            "BatteryType  lead",
            "OPTIONNAME"
          ],
          [
            "BatteryType  ni-mh",
            "OPTIONNAME"
          ],
          [
            "BatteryType  ni-cd",
            "OPTIONNAME"
          ],
          [
            "BatteryType  lib",
            "OPTIONNAME"
          ],
          [
            "BatteryType  zinc",
            "OPTIONNAME"
          ],
          [
            "BatteryType  alkaline",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "EvChargerAndDischarger",
    "message0": "EvChargerAndDischarger %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "ChargerDischargerType  AC_CPLT",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  AC_HLC_Charge",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  AC_HLC_ChargeDischarge",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  DC_AA_Charge",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  DC_AA_ChargeDischarge",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  DC_AA_Discharge",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  DC_BB_Charge",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  DC_BB_ChargeDischarge",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  DC_BB_Discharge",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  DC_EE_Charge",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  DC_EE_ChargeDischarge",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  DC_EE_Discharge",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  DC_FF_Charge",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  DC_FF_ChargeDischarge",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  DC_FF_Discharge",
            "OPTIONNAME"
          ],
          [
            "VehicleConnectionConfirmation  Connection confirmation",
            "OPTIONNAME"
          ],
          [
            "CumulativeAmountOfDischargingElectricEnergyResetSetting  Reset",
            "OPTIONNAME"
          ],
          [
            "CumulativeAmountOfChargingElectricEnergyResetSetting  Reset",
            "OPTIONNAME"
          ],
          [
            "SystemInterconnectedType  Grid connection(reverse flow acceptable)",
            "OPTIONNAME"
          ],
          [
            "SystemInterconnectedType  Independent operation",
            "OPTIONNAME"
          ],
          [
            "SystemInterconnectedType  Grid connection(reverse flow not acceptable)",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "EngineCogeneration",
    "message0": "EngineCogeneration %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "CumulativePowerGenerationOutputResetSetting  Reset",
            "OPTIONNAME"
          ],
          [
            "CumulativeGasConsumptionResetSetting  Reset",
            "OPTIONNAME"
          ],
          [
            "PowerGenerationStatus  Generating",
            "OPTIONNAME"
          ],
          [
            "PowerGenerationStatus  Stopped",
            "OPTIONNAME"
          ],
          [
            "PowerGenerationStatus  Idling",
            "OPTIONNAME"
          ],
          [
            "InHouseCumulativePowerConsumptionReset  Reset",
            "OPTIONNAME"
          ],
          [
            "SystemInterconnectedType  System-interconnected type (reverse power flow acceptable)",
            "OPTIONNAME"
          ],
          [
            "SystemInterconnectedType  Independent type",
            "OPTIONNAME"
          ],
          [
            "SystemInterconnectedType  System-interconnected type(reverse power flow not acceptable)",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "WaterFlowMeter",
    "message0": "WaterFlowMeter %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "WaterFlowMeterClassification  running water",
            "OPTIONNAME"
          ],
          [
            "WaterFlowMeterClassification  recycled water",
            "OPTIONNAME"
          ],
          [
            "WaterFlowMeterClassification  sewage water",
            "OPTIONNAME"
          ],
          [
            "WaterFlowMeterClassification  other water",
            "OPTIONNAME"
          ],
          [
            "OwnerClassification  Not specified",
            "OPTIONNAME"
          ],
          [
            "OwnerClassification  Public waterworks company",
            "OPTIONNAME"
          ],
          [
            "OwnerClassification  Private sector company",
            "OPTIONNAME"
          ],
          [
            "OwnerClassification  Individual",
            "OPTIONNAME"
          ],
          [
            "DetectionOfAbnormalValueInMeteringData  YES",
            "OPTIONNAME"
          ],
          [
            "DetectionOfAbnormalValueInMeteringData  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "LpGasMeter",
    "message0": "LpGasMeter %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "TestCallSetting  YES",
            "OPTIONNAME"
          ],
          [
            "TestCallSetting  NO",
            "OPTIONNAME"
          ],
          [
            "ErrorDetectionStatusOfMeteringData  YES",
            "OPTIONNAME"
          ],
          [
            "ErrorDetectionStatusOfMeteringData  NO",
            "OPTIONNAME"
          ],
          [
            "CenterValveShutOffStatus  YES",
            "OPTIONNAME"
          ],
          [
            "CenterValveShutOffStatus  NO",
            "OPTIONNAME"
          ],
          [
            "CenterValveShutOffRecoveryPermissionSettingStatus  YES",
            "OPTIONNAME"
          ],
          [
            "CenterValveShutOffRecoveryPermissionSettingStatus  NO",
            "OPTIONNAME"
          ],
          [
            "EmergencyValveShutOffStatus  YES",
            "OPTIONNAME"
          ],
          [
            "EmergencyValveShutOffStatus  NO",
            "OPTIONNAME"
          ],
          [
            "ShutOffValveOpenCloseStatus  YES",
            "OPTIONNAME"
          ],
          [
            "ShutOffValveOpenCloseStatus  NO",
            "OPTIONNAME"
          ],
          [
            "ResidualVolumeControlWarning  Residual volume control warning level 1",
            "OPTIONNAME"
          ],
          [
            "ResidualVolumeControlWarning  Residual volume control warning level 2",
            "OPTIONNAME"
          ],
          [
            "ResidualVolumeControlWarning  Residual volume control warning level 3",
            "OPTIONNAME"
          ],
          [
            "ResidualVolumeControlWarning  No residual volume control warning",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "PowerDistributionBoard",
    "message0": "PowerDistributionBoard %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "NumberOfMeasurementChannel(simplex)  Undefined",
            "OPTIONNAME"
          ],
          [
            "NumberOfMeasurementChannels(duplex)  Undefined",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "SmartGasMeter",
    "message0": "SmartGasMeter %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "GasMeterClassificationSetting  City gas",
            "OPTIONNAME"
          ],
          [
            "GasMeterClassificationSetting  LP gas",
            "OPTIONNAME"
          ],
          [
            "GasMeterClassificationSetting  Natural gas",
            "OPTIONNAME"
          ],
          [
            "GasMeterClassificationSetting  Other",
            "OPTIONNAME"
          ],
          [
            "OwnerClassificationSetting  Not specified",
            "OPTIONNAME"
          ],
          [
            "OwnerClassificationSetting  City gas",
            "OPTIONNAME"
          ],
          [
            "OwnerClassificationSetting  LP gas",
            "OPTIONNAME"
          ],
          [
            "OwnerClassificationSetting  Private-sector company",
            "OPTIONNAME"
          ],
          [
            "OwnerClassificationSetting  Indivisual",
            "OPTIONNAME"
          ],
          [
            "PermissionFromTheCenterToReopenTheValveClosedByTheCenter  YES",
            "OPTIONNAME"
          ],
          [
            "PermissionFromTheCenterToReopenTheValveClosedByTheCenter  NO",
            "OPTIONNAME"
          ],
          [
            "EmergencyClosureOfShutoffValve  YES",
            "OPTIONNAME"
          ],
          [
            "EmergencyClosureOfShutoffValve  NO",
            "OPTIONNAME"
          ],
          [
            "ShutoffValveStatus  Open",
            "OPTIONNAME"
          ],
          [
            "ShutoffValveStatus  Close",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "SmartKerosenseMeter",
    "message0": "SmartKerosenseMeter %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OwnerCategorySetting  Not specified",
            "OPTIONNAME"
          ],
          [
            "OwnerCategorySetting  Kerosene sales",
            "OPTIONNAME"
          ],
          [
            "OwnerCategorySetting  Private-sector company",
            "OPTIONNAME"
          ],
          [
            "OwnerCategorySetting  Indivisual",
            "OPTIONNAME"
          ],
          [
            "MeterReadingDataAbnormalityDetectionStatus  YES",
            "OPTIONNAME"
          ],
          [
            "MeterReadingDataAbnormalityDetectionStatus  NO",
            "OPTIONNAME"
          ],
          [
            "ResidualVolumeControlWarningLevel  Level 1",
            "OPTIONNAME"
          ],
          [
            "ResidualVolumeControlWarningLevel  Level 2",
            "OPTIONNAME"
          ],
          [
            "ResidualVolumeControlWarningLevel  Level 3",
            "OPTIONNAME"
          ],
          [
            "ResidualVolumeControlWarningLevel  None",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "GeneralLighting",
    "message0": "GeneralLighting %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "GeneralLighting",
        "options": [
          [
            "OperatingStatus  ON",
            "OperatingStatus  ON"
          ],
          [
            "OperatingStatus  OFF",
            "OperatingStatus  OFF"
          ],
          [
            "OnTimerSetting  ON",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "OffTimerSetting  ON",
            "OPTIONNAME"
          ],
          [
            "OffTimerSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "LightingModeSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "LightingModeSetting  Normal Lighting",
            "OPTIONNAME"
          ],
          [
            "LightingModeSetting  Night Lighting",
            "OPTIONNAME"
          ],
          [
            "LightingModeSetting  Color Lighting",
            "OPTIONNAME"
          ],
          [
            "LightColorSettingForMainLighting  Incandescent lamp color",
            "OPTIONNAME"
          ],
          [
            "LightColorSettingForMainLighting  White",
            "OPTIONNAME"
          ],
          [
            "LightColorSettingForMainLighting  Daylight white",
            "OPTIONNAME"
          ],
          [
            "LightColorSettingForMainLighting  Daylight color",
            "OPTIONNAME"
          ],
          [
            "LightColorSettingForMainLighting  Other",
            "OPTIONNAME"
          ],
          [
            "LightColorSettingForNightLighting  Incandescent lamp color",
            "OPTIONNAME"
          ],
          [
            "LightColorSettingForNightLighting  White",
            "OPTIONNAME"
          ],
          [
            "LightColorSettingForNightLighting  Daylight white",
            "OPTIONNAME"
          ],
          [
            "LightColorSettingForNightLighting  Daylight color",
            "OPTIONNAME"
          ],
          [
            "LightColorSettingForNightLighting  Other",
            "OPTIONNAME"
          ],
          [
            "LightingModeStatusInAutoMode  Normal Lighting",
            "OPTIONNAME"
          ],
          [
            "LightingModeStatusInAutoMode  Night Lighting",
            "OPTIONNAME"
          ],
          [
            "LightingModeStatusInAutoMode  Color Lighting",
            "OPTIONNAME"
          ],
          [
            "LightingModeStatusInAutoMode  Color Lighting",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "LightingForSolidLightEmittingSource",
    "message0": "LightingForSolidLightEmittingSource %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OnTimerReservationSetting  YES",
            "OPTIONNAME"
          ],
          [
            "OnTimerReservationSetting  NO",
            "OPTIONNAME"
          ],
          [
            "OffTimerReservationSetting  YES",
            "OPTIONNAME"
          ],
          [
            "OffTimerReservationSetting  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "Buzzar",
    "message0": "Buzzar %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "SoundGenerationSetting  YES",
            "OPTIONNAME"
          ],
          [
            "SoundGenerationSetting  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "EvCharger",
    "message0": "EvCharger %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "ChargerDischargerType  AC_CPLT",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  AC_HLC_Charge",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  DC_AA_Charge",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  DC_BB_Charge",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  DC_EE_Charge",
            "OPTIONNAME"
          ],
          [
            "ChargerDischargerType  DC_FF_Charge",
            "OPTIONNAME"
          ],
          [
            "VehicleConnectionConfirmation  Connection confirmation",
            "OPTIONNAME"
          ],
          [
            "CumulativeAmountOfChargingElectricEnergyResetSetting  Reset",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Charge",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  standby",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Idle",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Other",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "HouseholdSmallWindTurbinePowerGeneration",
    "message0": "HouseholdSmallWindTurbinePowerGeneration %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "SystemInterconnectionStatus  System-linked type",
            "OPTIONNAME"
          ],
          [
            "SystemInterconnectionStatus  Independent type",
            "OPTIONNAME"
          ],
          [
            "SystemInterconnectionStatus  Hybrid type",
            "OPTIONNAME"
          ],
          [
            "ResettingCumulativeAmountOfElectricityGenerated  Reset",
            "OPTIONNAME"
          ],
          [
            "ResettingCumulativeAmountOfElectricitySold  Reset",
            "OPTIONNAME"
          ],
          [
            "BrakingStatus  ON",
            "OPTIONNAME"
          ],
          [
            "BrakingStatus  OFF",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "ExtendedLightingSystem",
    "message0": "ExtendedLightingSystem %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "AutomaticOperationControllingSetting  ON",
            "OPTIONNAME"
          ],
          [
            "AutomaticOperationControllingSetting  OFF",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "MultipleInputPcs",
    "message0": "MultipleInputPcs %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "SystemInterconnectedType  System-interconnected type(reverse power flow acceptable)",
            "OPTIONNAME"
          ],
          [
            "SystemInterconnectedType  Independent type",
            "OPTIONNAME"
          ],
          [
            "SystemInterconnectedType  System-interconnected type(reverse power flow not acceptable)",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "HybridWaterHeater",
    "message0": "HybridWaterHeater %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "AutomaticWaterHeatingSetting  Auto Heating",
            "OPTIONNAME"
          ],
          [
            "AutomaticWaterHeatingSetting  Manual No Heating",
            "OPTIONNAME"
          ],
          [
            "AutomaticWaterHeatingSetting  Manual Heating",
            "OPTIONNAME"
          ],
          [
            "WaterHeatingStatus  YES",
            "OPTIONNAME"
          ],
          [
            "WaterHeatingStatus  NO",
            "OPTIONNAME"
          ],
          [
            "HeaterStatus  YES",
            "OPTIONNAME"
          ],
          [
            "HeaterStatus  NO",
            "OPTIONNAME"
          ],
          [
            "HotWaterSupplyModeSettingForAuxiliaryHeatSourceMachine  ON",
            "OPTIONNAME"
          ],
          [
            "HotWaterSupplyModeSettingForAuxiliaryHeatSourceMachine  OFF",
            "OPTIONNAME"
          ],
          [
            "HeaterModeSettingForAuxiliaryHeatSourceMachine  ON",
            "OPTIONNAME"
          ],
          [
            "HeaterModeSettingForAuxiliaryHeatSourceMachine  OFF",
            "OPTIONNAME"
          ],
          [
            "LinkageModeSettingForSolarPowerGeneration  Mode off",
            "OPTIONNAME"
          ],
          [
            "LinkageModeSettingForSolarPowerGeneration  Household consumption",
            "OPTIONNAME"
          ],
          [
            "LinkageModeSettingForSolarPowerGeneration  Prioritizing electricity sales",
            "OPTIONNAME"
          ],
          [
            "LinkageModeSettingForSolarPowerGeneration  Economic efficiency",
            "OPTIONNAME"
          ],
          [
            "HotWaterSupplyStatus  YES",
            "OPTIONNAME"
          ],
          [
            "HotWaterSupplyStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "ElectricHotWaterPot",
    "message0": "ElectricHotWaterPot %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "CoverOpenCloseStatus  Open",
            "OPTIONNAME"
          ],
          [
            "CoverOpenCloseStatus  Close",
            "OPTIONNAME"
          ],
          [
            "NoWaterwarning  YES",
            "OPTIONNAME"
          ],
          [
            "NoWaterwarning  NO",
            "OPTIONNAME"
          ],
          [
            "BoilUpSetting  Boil-up start",
            "OPTIONNAME"
          ],
          [
            "BoilUpSetting  Boil-up stop/warmer",
            "OPTIONNAME"
          ],
          [
            "BoilUpWarmerModeSetting  Citric acid cleaning",
            "OPTIONNAME"
          ],
          [
            "BoilUpWarmerModeSetting  normal warmer",
            "OPTIONNAME"
          ],
          [
            "BoilUpWarmerModeSetting  power-saving warmer",
            "OPTIONNAME"
          ],
          [
            "HotWaterDischargeStatus  YES",
            "OPTIONNAME"
          ],
          [
            "HotWaterDischargeStatus  NO",
            "OPTIONNAME"
          ],
          [
            "LockStatus  YES",
            "OPTIONNAME"
          ],
          [
            "LockStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "Refrigerator",
    "message0": "Refrigerator %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "QuickFreezeFunctionSetting  normal operation",
            "OPTIONNAME"
          ],
          [
            "QuickFreezeFunctionSetting  quick freeze",
            "OPTIONNAME"
          ],
          [
            "QuickFreezeFunctionSetting  standby for quick freezing",
            "OPTIONNAME"
          ],
          [
            "QuickRefrigerationFunctionSetting  normal operation",
            "OPTIONNAME"
          ],
          [
            "QuickRefrigerationFunctionSetting  quick refrigeration",
            "OPTIONNAME"
          ],
          [
            "QuickRefrigerationFunctionSetting  standby for quick refrigeration",
            "OPTIONNAME"
          ],
          [
            "IcemakerSetting  enable icemaker",
            "OPTIONNAME"
          ],
          [
            "IcemakerSetting  disable icemaker",
            "OPTIONNAME"
          ],
          [
            "IcemakerSetting  temporarily disable icemaker",
            "OPTIONNAME"
          ],
          [
            "IcemakerOperationStatus  YES",
            "OPTIONNAME"
          ],
          [
            "IcemakerOperationStatus  NO",
            "OPTIONNAME"
          ],
          [
            "IcemakerTankStatus  Water in tank",
            "OPTIONNAME"
          ],
          [
            "IcemakerTankStatus  No water",
            "OPTIONNAME"
          ],
          [
            "RefrigeratorCompartmentHumidificationFunctionSetting  ON",
            "OPTIONNAME"
          ],
          [
            "RefrigeratorCompartmentHumidificationFunctionSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "VegetableCompartmentHumidificationFunctionSetting  ON",
            "OPTIONNAME"
          ],
          [
            "VegetableCompartmentHumidificationFunctionSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "DeodorizationFunctionSetting  ON",
            "OPTIONNAME"
          ],
          [
            "DeodorizationFunctionSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "DoorOpenCloseStatus  Open",
            "OPTIONNAME"
          ],
          [
            "DoorOpenCloseStatus  Close",
            "OPTIONNAME"
          ],
          [
            "DoorOpenWarning  YES",
            "OPTIONNAME"
          ],
          [
            "DoorOpenWarning  NO",
            "OPTIONNAME"
          ],
          [
            "RefrigeratorCompartmentDoorStatus  Open",
            "OPTIONNAME"
          ],
          [
            "RefrigeratorCompartmentDoorStatus  Close",
            "OPTIONNAME"
          ],
          [
            "FreezerCompartmentDoorStatus  Open",
            "OPTIONNAME"
          ],
          [
            "FreezerCompartmentDoorStatus  Close",
            "OPTIONNAME"
          ],
          [
            "IceCompartmentDoorStatus  Open",
            "OPTIONNAME"
          ],
          [
            "IceCompartmentDoorStatus  Close",
            "OPTIONNAME"
          ],
          [
            "VegetableCompartmentDoorStatus  Open",
            "OPTIONNAME"
          ],
          [
            "VegetableCompartmentDoorStatus  Close",
            "OPTIONNAME"
          ],
          [
            "MultiRefrigeratingModeCompartmentDoorStatus  Open",
            "OPTIONNAME"
          ],
          [
            "MultiRefrigeratingModeCompartmentDoorStatus  Close",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "CombinationMicrowaveOven",
    "message0": "CombinationMicrowaveOven %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "DoorOpenCloseStatus  Open",
            "OPTIONNAME"
          ],
          [
            "DoorOpenCloseStatus  Close",
            "OPTIONNAME"
          ],
          [
            "HeatingStatus  Initial state",
            "OPTIONNAME"
          ],
          [
            "HeatingStatus  Heating",
            "OPTIONNAME"
          ],
          [
            "HeatingStatus  Heating suspended",
            "OPTIONNAME"
          ],
          [
            "HeatingStatus  Reporting completion of heating cycle",
            "OPTIONNAME"
          ],
          [
            "HeatingStatus  Setting",
            "OPTIONNAME"
          ],
          [
            "HeatingStatus  Preheating",
            "OPTIONNAME"
          ],
          [
            "HeatingStatus  Preheat temperature maintenance",
            "OPTIONNAME"
          ],
          [
            "HeatingStatus  Heating temporarily stopped for manual cooking action",
            "OPTIONNAME"
          ],
          [
            "HeatingSetting  Start/restart heating",
            "OPTIONNAME"
          ],
          [
            "HeatingSetting  Suspend heating",
            "OPTIONNAME"
          ],
          [
            "HeatingSetting  Stop heating",
            "OPTIONNAME"
          ],
          [
            "OvenModeSetting  Automatic selection",
            "OPTIONNAME"
          ],
          [
            "OvenModeSetting  Convection oven",
            "OPTIONNAME"
          ],
          [
            "OvenModeSetting  Circulation oven",
            "OPTIONNAME"
          ],
          [
            "OvenModeSetting  Hybrid oven",
            "OPTIONNAME"
          ],
          [
            "OvenModeSetting  undefined",
            "OPTIONNAME"
          ],
          [
            "OvenPreheatingSetting  With preheating",
            "OPTIONNAME"
          ],
          [
            "OvenPreheatingSetting  Without preheating",
            "OPTIONNAME"
          ],
          [
            "OvenPreheatingSetting  undefined",
            "OPTIONNAME"
          ],
          [
            "FermentingModeSetting  Automatic selection",
            "OPTIONNAME"
          ],
          [
            "FermentingModeSetting  Convection fermentation",
            "OPTIONNAME"
          ],
          [
            "FermentingModeSetting  Circulation fermentation",
            "OPTIONNAME"
          ],
          [
            "FermentingModeSetting  Hybrid fermentation",
            "OPTIONNAME"
          ],
          [
            "FermentingModeSetting  Microwave fermentation",
            "OPTIONNAME"
          ],
          [
            "FermentingModeSetting  undefined",
            "OPTIONNAME"
          ],
          [
            "HeatingModeSetting  Microwave heating",
            "OPTIONNAME"
          ],
          [
            "HeatingModeSetting  Defrosting",
            "OPTIONNAME"
          ],
          [
            "HeatingModeSetting  Oven",
            "OPTIONNAME"
          ],
          [
            "HeatingModeSetting  Grill",
            "OPTIONNAME"
          ],
          [
            "HeatingModeSetting  Toaster",
            "OPTIONNAME"
          ],
          [
            "HeatingModeSetting  Fermenting",
            "OPTIONNAME"
          ],
          [
            "HeatingModeSetting  Stewing",
            "OPTIONNAME"
          ],
          [
            "HeatingModeSetting  Steaming",
            "OPTIONNAME"
          ],
          [
            "HeatingModeSetting  Two stage microwave heating",
            "OPTIONNAME"
          ],
          [
            "HeatingModeSetting  undefined",
            "OPTIONNAME"
          ],
          [
            "AutomaticHeatingSetting  Automatic",
            "OPTIONNAME"
          ],
          [
            "AutomaticHeatingSetting  Manual",
            "OPTIONNAME"
          ],
          [
            "AutomaticHeatingSetting  undefined",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "CookingHeater",
    "message0": "CookingHeater %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "ChildLockSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "ChildLockSetting  ON",
            "OPTIONNAME"
          ],
          [
            "RadiantHeaterLockSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "RadiantHeaterLockSetting  ON",
            "OPTIONNAME"
          ],
          [
            "AllStopSetting  Stop all heating",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "RiceCooker",
    "message0": "RiceCooker %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "RiceCookingReservationSetting  ON",
            "OPTIONNAME"
          ],
          [
            "RiceCookingReservationSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "CoverOpenCloseStatus  Open",
            "OPTIONNAME"
          ],
          [
            "CoverOpenCloseStatus  Close",
            "OPTIONNAME"
          ],
          [
            "RiceCookingStatus  Stop",
            "OPTIONNAME"
          ],
          [
            "RiceCookingStatus  Preheating",
            "OPTIONNAME"
          ],
          [
            "RiceCookingStatus  Rice cooking",
            "OPTIONNAME"
          ],
          [
            "RiceCookingStatus  Steaming",
            "OPTIONNAME"
          ],
          [
            "RiceCookingStatus  ",
            "OPTIONNAME"
          ],
          [
            "RiceCookingControlSetting  Rice cooking start/restart",
            "OPTIONNAME"
          ],
          [
            "RiceCookingControlSetting  Rice cooking suspension",
            "OPTIONNAME"
          ],
          [
            "WarmerSetting  YES",
            "OPTIONNAME"
          ],
          [
            "WarmerSetting  NO",
            "OPTIONNAME"
          ],
          [
            "InnerPotRemovalStatus  YES",
            "OPTIONNAME"
          ],
          [
            "InnerPotRemovalStatus  NO",
            "OPTIONNAME"
          ],
          [
            "CoverRemovalStatus  YES",
            "OPTIONNAME"
          ],
          [
            "CoverRemovalStatus  NO",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "WashingMachine",
    "message0": "WashingMachine %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OnTimerSetting  ON",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "DoorCoverOpenCloseStatus  Open",
            "OPTIONNAME"
          ],
          [
            "DoorCoverOpenCloseStatus  Close",
            "OPTIONNAME"
          ],
          [
            "WashingMachineSetting   Start/restart the washing cycle",
            "OPTIONNAME"
          ],
          [
            "WashingMachineSetting   Suspend the washing cycle",
            "OPTIONNAME"
          ],
          [
            "WashingMachineSetting   Stop the washing cycle",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWashingCycle  Washing",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWashingCycle  Rinsing",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWashingCycle  Spin drying",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWashingCycle  Suspended",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWashingCycle  The washing cycle stopped/completed",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "ClothDryer",
    "message0": "ClothDryer %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OnTimerSetting  ON",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "DoorCoverOpenCloseStatus  Open",
            "OPTIONNAME"
          ],
          [
            "DoorCoverOpenCloseStatus  Close",
            "OPTIONNAME"
          ],
          [
            "DryingSetting   Start/restart drying",
            "OPTIONNAME"
          ],
          [
            "DryingSetting   Suspend drying",
            "OPTIONNAME"
          ],
          [
            "DryingSetting   Stop drying",
            "OPTIONNAME"
          ],
          [
            "DryingStatus  Drying in progress",
            "OPTIONNAME"
          ],
          [
            "DryingStatus  Drying suspended",
            "OPTIONNAME"
          ],
          [
            "DryingStatus  Drying stopped/completed",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "CommercialShowCase",
    "message0": "CommercialShowCase %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OperationModeSetting  Cooling",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Non-cooling",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Defrosting",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Other",
            "OPTIONNAME"
          ],
          [
            "ShowcaseTypeInformation  Non-fluorocarbon inverter",
            "OPTIONNAME"
          ],
          [
            "ShowcaseTypeInformation  Inverter",
            "OPTIONNAME"
          ],
          [
            "ShowcaseTypeInformation  Other",
            "OPTIONNAME"
          ],
          [
            "DoorTypeInformation  Open",
            "OPTIONNAME"
          ],
          [
            "DoorTypeInformation  Close",
            "OPTIONNAME"
          ],
          [
            "ShowcaseConfigurationInformation  Separate type",
            "OPTIONNAME"
          ],
          [
            "ShowcaseConfigurationInformation  Built-in type",
            "OPTIONNAME"
          ],
          [
            "ShowcaseShapeInformation  Box type",
            "OPTIONNAME"
          ],
          [
            "ShowcaseShapeInformation  Desktop type",
            "OPTIONNAME"
          ],
          [
            "ShowcaseShapeInformation  Triple glass type",
            "OPTIONNAME"
          ],
          [
            "ShowcaseShapeInformation  Quadruple glass type",
            "OPTIONNAME"
          ],
          [
            "ShowcaseShapeInformation  Reach-in",
            "OPTIONNAME"
          ],
          [
            "ShowcaseShapeInformation  Glass top type",
            "OPTIONNAME"
          ],
          [
            "ShowcaseShapeInformation  Multistage open (ceiling blowoff type)",
            "OPTIONNAME"
          ],
          [
            "ShowcaseShapeInformation  ultistageopen (backside blowoff type)",
            "OPTIONNAME"
          ],
          [
            "ShowcaseShapeInformation  Flat type",
            "OPTIONNAME"
          ],
          [
            "ShowcaseShapeInformation  Walk-in type",
            "OPTIONNAME"
          ],
          [
            "ShowcaseShapeInformation  Other",
            "OPTIONNAME"
          ],
          [
            "TemperatureRangeInformationForInsideTheCase  Refrigeration",
            "OPTIONNAME"
          ],
          [
            "TemperatureRangeInformationForInsideTheCase  Freezing",
            "OPTIONNAME"
          ],
          [
            "InternalLightingOperationStatus  ON",
            "OPTIONNAME"
          ],
          [
            "InternalLightingOperationStatus  OFF",
            "OPTIONNAME"
          ],
          [
            "ExternalLightingOperationStatus  ON",
            "OPTIONNAME"
          ],
          [
            "ExternalLightingOperationStatus  OFF",
            "OPTIONNAME"
          ],
          [
            "CompressorOperationStatus  ON",
            "OPTIONNAME"
          ],
          [
            "CompressorOperationStatus  OFF",
            "OPTIONNAME"
          ],
          [
            "HeaterMode  ON",
            "OPTIONNAME"
          ],
          [
            "HeaterMode  OFF",
            "OPTIONNAME"
          ],
          [
            "TypeOfLightingInsideTheShowcase  Fluorescent lights",
            "OPTIONNAME"
          ],
          [
            "TypeOfLightingInsideTheShowcase  LED",
            "OPTIONNAME"
          ],
          [
            "TypeOfLightingInsideTheShowcase  No lighting",
            "OPTIONNAME"
          ],
          [
            "TypeOfLightingInsideTheShowcase  Other",
            "OPTIONNAME"
          ],
          [
            "TypeOfLightingOutsideTheCase  Fluorescent lights",
            "OPTIONNAME"
          ],
          [
            "TypeOfLightingOutsideTheCase  LED",
            "OPTIONNAME"
          ],
          [
            "TypeOfLightingOutsideTheCase  No lighting",
            "OPTIONNAME"
          ],
          [
            "TypeOfLightingOutsideTheCase  Other",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "WasherAndDryer",
    "message0": "WasherAndDryer %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OnTimerSetting  ON",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "DoorCoverOpenCloseStatus  Open",
            "OPTIONNAME"
          ],
          [
            "DoorCoverOpenCloseStatus  Close",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerSetting  Start/restart or in progress",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerSetting  Suspend",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerSetting  Stop",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  Standard",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  silent",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  heavily soiled clothes",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  hard-to-remove stains",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  presoaking",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  blankets",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  soft",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  dry",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  clean rinsing",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  ironing/business shirts",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  hang drying",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  thick clothes",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  disinfection",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  oil stains",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  memory",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  detergent saving",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  lightly soiled clothes",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  quick wash of small amount of laundry",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  Standard",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  silent",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  heavily soiled clothes",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  hard-to-remove stains",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  presoaking",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  blankets",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  soft",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  dry",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  clean rinsing",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  disinfection",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  oil stains",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  memory",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  detergent saving",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  lightly soiled clothes",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  quick wash of small amount of laundry",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  tank cleaning",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  Standard",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  blankets",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  soft",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  dry",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  ironing/business shirts",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  hang drying",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  thick clothes",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  disinfection",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  shrinkage minimization",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  finishing",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  stationary drying",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  user definition of drying time",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  garment warming",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting1(note1)  tank cleaning",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting2(note1)  No washing",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting2(note1)  Standard",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting2(note1)  silent",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting2(note1)  heavily soiled clothes",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting2(note1)  hard-to-remove stains",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting2(note1)  presoaking",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting2(note1)  blankets",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting2(note1)  soft",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting2(note1)  dry",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting2(note1)  clean rinsing",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting2(note1)  disinfection",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting2(note1)  oil stains",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting2(note1)  memory",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting2(note1)  detergent saving",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting2(note1)  lightly soiled clothes",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting2(note1)  quick wash of small amount of laundry",
            "OPTIONNAME"
          ],
          [
            "WasherAndDryerCycleSetting2(note1)  tank cleaning",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting(note1)  No drying",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting(note1)  Standard",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting(note1)  blankets",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting(note1)  soft",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting(note1)  dry",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting(note1)  ironing/business shirts",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting(note1)  hang drying",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting(note1)  thick clothes",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting(note1)  disinfection",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting(note1)  shrinkage minimization",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting(note1)  finishing",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting(note1)  stationary drying",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting(note1)  user definition of drying time",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting(note1)  garment warming",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting(note1)  heater current limit",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting(note1)  tank cleaning",
            "OPTIONNAME"
          ],
          [
            "WaterFlowRateSetting  AUTO",
            "OPTIONNAME"
          ],
          [
            "RotationSpeedForSpinDryingSetting  AUTO",
            "OPTIONNAME"
          ],
          [
            "DegreeOfDryingSetting  AUTO",
            "OPTIONNAME"
          ],
          [
            "PresoakingTimeSetting  AUTO",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  washing",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  rinsing",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  spin drying",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  suspended",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  washing completed",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  washing/drying (without wrinkling minimization) completed",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  drying",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  wrinkling minimization",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  drying (with wrinkling minimization) completed",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  standing by to start",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  1st rinsing",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  2nd rinsing",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  3rd rinsing",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  4th rinsing",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  5th rinsing",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  6th rinsing",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  7th rinsing",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  8th rinsing",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  1st spin drying",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  2nd spin drying",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  3rd spin drying",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  4th spin drying",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  5th spin drying",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  6th spin drying",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  7th spin drying",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  8th spin drying",
            "OPTIONNAME"
          ],
          [
            "CurrentStageOfWasherAndDryerCycle  Preheat spin drying",
            "OPTIONNAME"
          ],
          [
            "WaterVolumeSetting1  AUTO",
            "OPTIONNAME"
          ],
          [
            "WaterVolumeSetting2  AUTO",
            "OPTIONNAME"
          ],
          [
            "WashingTimeSetting  AUTO",
            "OPTIONNAME"
          ],
          [
            "NumberOfTimesOfRinsingSetting  AUTO",
            "OPTIONNAME"
          ],
          [
            "SpinDryingTimeSetting  AUTO",
            "OPTIONNAME"
          ],
          [
            "DryingTimeSetting  AUTO",
            "OPTIONNAME"
          ],
          [
            "BathtubWaterRecycleSetting  Bathtub water not used",
            "OPTIONNAME"
          ],
          [
            "BathtubWaterRecycleSetting  Washing only",
            "OPTIONNAME"
          ],
          [
            "BathtubWaterRecycleSetting  Rinsing only(excluding the final rinsing)",
            "OPTIONNAME"
          ],
          [
            "BathtubWaterRecycleSetting  All rinsing processes",
            "OPTIONNAME"
          ],
          [
            "BathtubWaterRecycleSetting  Washing + rinsing(excluding the final rinsing)",
            "OPTIONNAME"
          ],
          [
            "BathtubWaterRecycleSetting  Washing + all rinsing processes",
            "OPTIONNAME"
          ],
          [
            "WrinklingMinimizationSetting  ON",
            "OPTIONNAME"
          ],
          [
            "WrinklingMinimizationSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "DoorCoverLockSetting  Lock",
            "OPTIONNAME"
          ],
          [
            "DoorCoverLockSetting  Unlock",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "CommercialShowCaseOutdoorUnit",
    "message0": "CommercialShowCaseOutdoorUnit %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "ExceptionalStatus  Normal",
            "OPTIONNAME"
          ],
          [
            "ExceptionalStatus  Defrosting",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Cooling",
            "OPTIONNAME"
          ],
          [
            "OperationModeSetting  Non-cooling",
            "OPTIONNAME"
          ],
          [
            "GroupInformation  ON",
            "OPTIONNAME"
          ],
          [
            "GroupInformation  OFF",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "DishwasherAndDryer",
    "message0": "DishwasherAndDryer %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "OnTimerSetting  ON",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting  OFF",
            "OPTIONNAME"
          ],
          [
            "OnTimerSetting(time)  Undefined",
            "OPTIONNAME"
          ],
          [
            "DoorCoverOpenCloseSetting  Open",
            "OPTIONNAME"
          ],
          [
            "DoorCoverOpenCloseSetting  Close",
            "OPTIONNAME"
          ],
          [
            "DoorCoverLockSetting  Lock",
            "OPTIONNAME"
          ],
          [
            "DoorCoverLockSetting  Unlock",
            "OPTIONNAME"
          ],
          [
            "OperationStatusSetting  Start/restart(ed) or in progress",
            "OPTIONNAME"
          ],
          [
            "OperationStatusSetting  Operation suspended",
            "OPTIONNAME"
          ],
          [
            "OperationStatusSetting  Operation stopped",
            "OPTIONNAME"
          ],
          [
            "DishWashingMethodSetting  Dish-washing operation OFF",
            "OPTIONNAME"
          ],
          [
            "DishWashingMethodSetting  Standard",
            "OPTIONNAME"
          ],
          [
            "DishWashingMethodSetting  Silent",
            "OPTIONNAME"
          ],
          [
            "DishWashingMethodSetting  Heavily stained",
            "OPTIONNAME"
          ],
          [
            "DishWashingMethodSetting  Hard-to-remove stains",
            "OPTIONNAME"
          ],
          [
            "DishWashingMethodSetting  Soft",
            "OPTIONNAME"
          ],
          [
            "DishWashingMethodSetting  Lightly stained",
            "OPTIONNAME"
          ],
          [
            "DishWashingMethodSetting  Quick wash of small amount of laundry",
            "OPTIONNAME"
          ],
          [
            "DishWashingMethodSetting  Rinsing only",
            "OPTIONNAME"
          ],
          [
            "DishWashingMethodSetting  Disinfection",
            "OPTIONNAME"
          ],
          [
            "DishWashingMethodSetting  Maintenance",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting  Drying operation OFF",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting  Very low",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting  Low",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting  Standard",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting  Soft",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting  High",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting  Very high",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting  User definition of drying time",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting  Drying only",
            "OPTIONNAME"
          ],
          [
            "DryingCycleSetting  Drying inside",
            "OPTIONNAME"
          ],
          [
            "StoringMethodSetting  Storing operation OFF",
            "OPTIONNAME"
          ],
          [
            "StoringMethodSetting  Blowing",
            "OPTIONNAME"
          ],
          [
            "StoringMethodSetting  Dehumidification",
            "OPTIONNAME"
          ],
          [
            "StoringMethodSetting  Disinfection",
            "OPTIONNAME"
          ],
          [
            "PrewashingTimeSetting  AUTO",
            "OPTIONNAME"
          ],
          [
            "HighestWaterTemperatureSettingForPrewashing  Not to use warm water",
            "OPTIONNAME"
          ],
          [
            "HighestWaterTemperatureSettingForPrewashing  AUTO",
            "OPTIONNAME"
          ],
          [
            "WashingTimeSetting  AUTO",
            "OPTIONNAME"
          ],
          [
            "HighestWaterTemperatureSettingForWashing  Not to use warm water",
            "OPTIONNAME"
          ],
          [
            "HighestWaterTemperatureSettingForWashing  AUTO",
            "OPTIONNAME"
          ],
          [
            "NumberOfTimesOfRinsingSetting  AUTO",
            "OPTIONNAME"
          ],
          [
            "HighestWaterTemperatureSettingForHotWaterRinsing  Not to use warm water",
            "OPTIONNAME"
          ],
          [
            "HighestWaterTemperatureSettingForHotWaterRinsing  AUTO",
            "OPTIONNAME"
          ],
          [
            "DishWashingWaterVolumeSetting  AUTO",
            "OPTIONNAME"
          ],
          [
            "DishWashingWaterPressureSetting  AUTO",
            "OPTIONNAME"
          ],
          [
            "DishWashingLevelSetting  AUTO",
            "OPTIONNAME"
          ],
          [
            "DryingTimeSetting  AUTO",
            "OPTIONNAME"
          ],
          [
            "HighestAirTemperatureSettingForHotAirDrying  Not to use warm water",
            "OPTIONNAME"
          ],
          [
            "HighestAirTemperatureSettingForHotAirDrying  AUTO",
            "OPTIONNAME"
          ],
          [
            "DryingAirFlowRateSetting  AUTO",
            "OPTIONNAME"
          ],
          [
            "DryingLevelSetting  AUTO",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  Before starting operation",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  Before operation",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  ON timer standing by",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  Dish-washing ongoing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  Prewashing ongoing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  Washing ongoing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  Rinsing ongoing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  Dish-washing suspended",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  Drying ongoing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  Hot air drying ongoing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  Air drying ongoing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  Drying suspended",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  Storing ongoing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  Blowing ongoing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  Dehumidification ongoing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  Disinfection ongoing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  Storing suspended",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  Operation completed",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  1st rinsing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  2nd rinsing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  3rd rinsing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  4th rinsing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  5th rinsing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  6th rinsing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  7th rinsing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  8th rinsing",
            "OPTIONNAME"
          ],
          [
            "OperationTransitionStatus  Unknown status",
            "OPTIONNAME"
          ],
          [
            "RemainingTimeOnTheOnTimer  Undefined",
            "OPTIONNAME"
          ],
          [
            "RemainingTimeOfPrewashing  Undefined",
            "OPTIONNAME"
          ],
          [
            "RemainingTimeOfWashing  Undefined",
            "OPTIONNAME"
          ],
          [
            "RemainingTimeForRinsing  Undefined",
            "OPTIONNAME"
          ],
          [
            "RemainingTimeOfDishWashing  Undefined",
            "OPTIONNAME"
          ],
          [
            "RemainingDryingTime  Undefined",
            "OPTIONNAME"
          ],
          [
            "RemainingTimeOfWashingAndDrying  Undefined",
            "OPTIONNAME"
          ],
          [
            "UsedWaterVolume  Undefined",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "DrEventController",
    "message0": "DrEventController %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "DrProgramType  CPP",
            "OPTIONNAME"
          ],
          [
            "DrProgramType  PTR",
            "OPTIONNAME"
          ],
          [
            "DrProgramType  Power use limit",
            "OPTIONNAME"
          ],
          [
            "DrProgramType  Power generation limit",
            "OPTIONNAME"
          ],
          [
            "DrProgramType  Electricity forecast",
            "OPTIONNAME"
          ],
          [
            "DrProgramType  DLC",
            "OPTIONNAME"
          ],
          [
            "DrProgramType  Level designation",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "Controller",
    "message0": "Controller %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "ConnectionStatus  Connected",
            "OPTIONNAME"
          ],
          [
            "ConnectionStatus  Disconnected",
            "OPTIONNAME"
          ],
          [
            "ConnectionStatus  Not registered",
            "OPTIONNAME"
          ],
          [
            "ConnectionStatus  Deleted",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "Display",
    "message0": "Display %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "DisplayControlSetting  Displaying enabled",
            "OPTIONNAME"
          ],
          [
            "DisplayControlSetting  Displaying disabled",
            "OPTIONNAME"
          ],
          [
            "CharacterStringSettingAcceptanceStatus  Ready",
            "OPTIONNAME"
          ],
          [
            "CharacterStringSettingAcceptanceStatus  Busy",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "Television",
    "message0": "Television %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "DisplayControlSetting  Displaying enabled",
            "OPTIONNAME"
          ],
          [
            "DisplayControlSetting  Displaying disabled",
            "OPTIONNAME"
          ],
          [
            "CharacterStringSettingAcceptanceStatus  Ready",
            "OPTIONNAME"
          ],
          [
            "CharacterStringSettingAcceptanceStatus  Busy",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "Audio",
    "message0": "Audio %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "MuteSetting  ON",
            "OPTIONNAME"
          ],
          [
            "MuteSetting  OFF",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  },
  {
    "type": "NetworkCamera",
    "message0": "NetworkCamera %1",
    "output": null,
    "colour": 230,
    "args0": [
      {
        "type": "field_dropdown",
        "name": "NAME",
        "options": [
          [
            "StillImagePhotographySettingAcceptanceStatus  Ready",
            "OPTIONNAME"
          ],
          [
            "StillImagePhotographySettingAcceptanceStatus  Busy",
            "OPTIONNAME"
          ],
          [
            "StillImagePhotographySetting  Shoot",
            "OPTIONNAME"
          ]
        ]
      }
    ]
  }
]
);


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

Blockly.Blocks['set'] = {
  init: function() {
    this.appendValueInput("NAME")
        .setCheck(null)
        .appendField("set");
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};


Blockly.defineBlocksWithJsonArray([
  {
    "type": "trigger_action",
    "message0": "Condition %1 Action %2",
    "args0": [
      {
        "type": "input_value",
        "name": "trigger"
      },
      {
        "type": "input_value",
        "name": "action"
      }
    ],
    "previousStatement": null,
    "nextStatement": null,
    "colour": 230,
    "tooltip": "",
    "helpUrl": ""
  }
]);

Blockly.defineBlocksWithJsonArray([
  {
    "type": "time",
    "message0": "at %1 : %2 %3 %4",
    "args0": [
      {
        "type": "field_input",
        "name": "hour",
        "text": "0"
      },
      {
        "type": "field_input",
        "name": "minute",
        "text": "0"
      },
      {
        "type": "field_dropdown",
        "name": "APM",
        "options": [
          [
            "AM",
            "AM"
          ],
          [
            "PM",
            "PM"
          ]
        ]
      },
      {
        "type": "input_value",
        "name": "NAME"
      }
    ],
    "previousStatement": null,
    "nextStatement": null,
    "colour": 230,
    "tooltip": "",
    "helpUrl": ""
  },
  {
    "type": "period",
    "message0": "from %1 : %2 to %3 : %4 %5",
    "args0": [
      {
        "type": "field_input",
        "name": "time1",
        "text": "0"
      },
      {
        "type": "field_input",
        "name": "time2",
        "text": "0"
      },
      {
        "type": "field_input",
        "name": "time3",
        "text": "0"
      },
      {
        "type": "field_input",
        "name": "time4",
        "text": "0"
      },
      {
        "type": "input_value",
        "name": "NAME"
      }
    ],
    "previousStatement": null,
    "nextStatement": null,
    "colour": 230,
    "tooltip": "",
    "helpUrl": ""
  },
  {
    "type": "timer",
    "message0": "after %1 hour %2 min",
    "args0": [
      {
        "type": "field_input",
        "name": "hour",
        "text": "0"
      },
      {
        "type": "field_input",
        "name": "minute",
        "text": "0"
      }
    ],
    "previousStatement": null,
    "nextStatement": null,
    "colour": 230,
    "tooltip": "",
    "helpUrl": ""
  },
  {
    "type": "weeks",
    "message0": "from %1 to %2",
    "args0": [
      {
        "type": "field_dropdown",
        "name": "week1",
        "options": [
          [
            "SUN",
            "SUN"
          ],
          [
            "MON",
            "MON"
          ],
          [
            "TUE",
            "TUE"
          ],
          [
            "WED",
            "WED"
          ],
          [
            "THU",
            "THU"
          ],
          [
            "FRI",
            "FRI"
          ],
          [
            "SAT",
            "SAT"
          ]
        ]
      },
      {
        "type": "field_dropdown",
        "name": "week2",
        "options": [
          [
            "SUN",
            "SUN"
          ],
          [
            "MON",
            "MON"
          ],
          [
            "TUE",
            "TUE"
          ],
          [
            "WED",
            "WED"
          ],
          [
            "THU",
            "THU"
          ],
          [
            "FRI",
            "FRI"
          ],
          [
            "SAT",
            "SAT"
          ]
        ]
      }
    ],
    "output": null,
    "colour": 230,
    "tooltip": "",
    "helpUrl": ""
  },
  {
    "type": "week",
    "message0": "on %1",
    "args0": [
      {
        "type": "field_dropdown",
        "name": "week1",
        "options": [
          [
            "SUN",
            "SUN"
          ],
          [
            "MON",
            "MON"
          ],
          [
            "TUE",
            "TUE"
          ],
          [
            "WED",
            "WED"
          ],
          [
            "THU",
            "THU"
          ],
          [
            "FRI",
            "FRI"
          ],
          [
            "SAT",
            "SAT"
          ]
        ]
      }
    ],
    "output": null,
    "colour": 230,
    "tooltip": "",
    "helpUrl": ""
  }
]);