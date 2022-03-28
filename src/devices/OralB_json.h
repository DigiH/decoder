const char* _OralB_json = "{\"brand\":\"Oral-B\",\"model\":\"BT Toothbrush\",\"model_id\":\"Oral-B_BT\",\"condition\":[\"manufacturerdata\",\">=\",22,\"index\",0,\"dc00\"],\"properties\":{\"state\":{\"condition\":[\"manufacturerdata\",10,\"01\"],\"decoder\":[\"static_value\",\"initialising\"]},\"_state\":{\"condition\":[\"manufacturerdata\",10,\"02\"],\"decoder\":[\"static_value\",\"idle\"]},\"__state\":{\"condition\":[\"manufacturerdata\",10,\"03\"],\"decoder\":[\"static_value\",\"running\"]},\"___state\":{\"condition\":[\"manufacturerdata\",10,\"04\"],\"decoder\":[\"static_value\",\"charging\"]},\"____state\":{\"condition\":[\"manufacturerdata\",10,\"73\"],\"decoder\":[\"static_value\",\"sleeping\"]},\"mode\":{\"condition\":[\"manufacturerdata\",18,\"00\"],\"decoder\":[\"static_value\",\"off\"]},\"_mode\":{\"condition\":[\"manufacturerdata\",18,\"01\"],\"decoder\":[\"static_value\",\"daily clean\"]},\"__mode\":{\"condition\":[\"manufacturerdata\",18,\"02\"],\"decoder\":[\"static_value\",\"sensitive\"]},\"___mode\":{\"condition\":[\"manufacturerdata\",18,\"03\"],\"decoder\":[\"static_value\",\"massage\"]},\"____mode\":{\"condition\":[\"manufacturerdata\",18,\"04\"],\"decoder\":[\"static_value\",\"whitening\"]},\"_____mode\":{\"condition\":[\"manufacturerdata\",18,\"05\"],\"decoder\":[\"static_value\",\"deep clean\"]},\"______mode\":{\"condition\":[\"manufacturerdata\",18,\"06\"],\"decoder\":[\"static_value\",\"tongue cleaning\"]},\"_______mode\":{\"condition\":[\"manufacturerdata\",18,\"07\"],\"decoder\":[\"static_value\",\"turbo\"]},\"sector\":{\"condition\":[\"manufacturerdata\",20,\"01\"],\"decoder\":[\"static_value\",\"sector 1\"]},\"_sector\":{\"condition\":[\"manufacturerdata\",20,\"02\"],\"decoder\":[\"static_value\",\"sector 2\"]},\"__sector\":{\"condition\":[\"manufacturerdata\",20,\"03\"],\"decoder\":[\"static_value\",\"sector 3\"]},\"___sector\":{\"condition\":[\"manufacturerdata\",20,\"04\"],\"decoder\":[\"static_value\",\"sector 4\"]},\"____sector\":{\"condition\":[\"manufacturerdata\",20,\"05\"],\"decoder\":[\"static_value\",\"sector 5\"]},\"_____sector\":{\"condition\":[\"manufacturerdata\",20,\"06\"],\"decoder\":[\"static_value\",\"sector 6\"]},\"______sector\":{\"condition\":[\"manufacturerdata\",20,\"07\"],\"decoder\":[\"static_value\",\"sector 7\"]},\"_______sector\":{\"condition\":[\"manufacturerdata\",20,\"08\"],\"decoder\":[\"static_value\",\"sector 8\"]},\"pressure\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,2,false,false]},\".cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",16,2,false,false]},\"time\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,2,false,false],\"post_proc\":[\"*\",60,\"+\",\".cal\"]}}}";
/*R""""(
{
   "brand":"Oral-B",
   "model":"BT Toothbrush",
   "model_id":"Oral-B_BT",
   "condition":["manufacturerdata", ">=", 22, "index", 0, "dc00"],
   "properties":{
      "state":{
         "condition":["manufacturerdata", 10, "01"],
         "decoder":["static_value", "initialising"]
      },
      "_state":{
         "condition":["manufacturerdata", 10, "02"],
         "decoder":["static_value", "idle"]
      },
      "__state":{
         "condition":["manufacturerdata", 10, "03"],
         "decoder":["static_value", "running"]
      },
      "___state":{
         "condition":["manufacturerdata", 10, "04"],
         "decoder":["static_value", "charging"]
      },
      "____state":{
         "condition":["manufacturerdata", 10, "73"],
         "decoder":["static_value", "sleeping"]
      },
      "mode":{
         "condition":["manufacturerdata", 18, "00"],
         "decoder":["static_value", "off"]
      },
      "_mode":{
         "condition":["manufacturerdata", 18, "01"],
         "decoder":["static_value", "daily clean"]
      },
      "__mode":{
         "condition":["manufacturerdata", 18, "02"],
         "decoder":["static_value", "sensitive"]
      },
      "___mode":{
         "condition":["manufacturerdata", 18, "03"],
         "decoder":["static_value", "massage"]
      },
      "____mode":{
         "condition":["manufacturerdata", 18, "04"],
         "decoder":["static_value", "whitening"]
      },
      "_____mode":{
         "condition":["manufacturerdata", 18, "05"],
         "decoder":["static_value", "deep clean"]
      },
      "______mode":{
         "condition":["manufacturerdata", 18, "06"],
         "decoder":["static_value", "tongue cleaning"]
      },
      "_______mode":{
         "condition":["manufacturerdata", 18, "07"],
         "decoder":["static_value", "turbo"]
      },
      "sector":{
         "condition":["manufacturerdata", 20, "01"],
         "decoder":["static_value", "sector 1"]
      },
      "_sector":{
         "condition":["manufacturerdata", 20, "02"],
         "decoder":["static_value", "sector 2"]
      },
      "__sector":{
         "condition":["manufacturerdata", 20, "03"],
         "decoder":["static_value", "sector 3"]
      },
      "___sector":{
         "condition":["manufacturerdata", 20, "04"],
         "decoder":["static_value", "sector 4"]
      },
      "____sector":{
         "condition":["manufacturerdata", 20, "05"],
         "decoder":["static_value", "sector 5"]
      },
      "_____sector":{
         "condition":["manufacturerdata", 20, "06"],
         "decoder":["static_value", "sector 6"]
      },
      "______sector":{
         "condition":["manufacturerdata", 20, "07"],
         "decoder":["static_value", "sector 7"]
      },
      "_______sector":{
         "condition":["manufacturerdata", 20, "08"],
         "decoder":["static_value", "sector 8"]
      },
      "pressure":{
         "decoder":["value_from_hex_data", "manufacturerdata", 12, 2, false, false]
      },
      ".cal":{
         "decoder":["value_from_hex_data", "manufacturerdata", 16, 2, false, false]
      },
      "time":{
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 2, false, false],
         "post_proc":["*", 60, "+", ".cal"]
      }
   }
})"""";*/

const char* _OralB_json_props = "{\"properties\":{\"state\":{\"unit\":\"string\",\"name\":\"state\"},\"mode\":{\"unit\":\"string\",\"name\":\"mode\"},\"sector\":{\"unit\":\"string\",\"name\":\"sector\"},\"pressure\":{\"unit\":\"int\",\"name\":\"pressure\"},\"time\":{\"unit\":\"int\",\"name\":\"time\"}}}";
/*R""""(
{
   "properties":{
      "state":{
         "unit":"string",
         "name":"state"
      },
      "mode":{
         "unit":"string",
         "name":"mode"
      },
      "sector":{
         "unit":"string",
         "name":"sector"
      },
      "pressure":{
         "unit":"int",
         "name":"pressure"
      },
      "time":{
         "unit":"int",
         "name":"time"
      }
   }
})"""";*/