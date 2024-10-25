const char* _APPLEAIRPODS_json = "{\"brand\":\"Apple/Beats\",\"model\":\"AirPods (Pro)/Solo|Studio Buds\",\"model_id\":\"APPLEAIRPODS\",\"tag\":\"0b08\",\"condition\":[\"manufacturerdata\",\"index\",8,\"01\",\"&\",\"manufacturerdata\",\"=\",58,\"index\",0,\"4c0007\"],\"properties\":{\"version\":{\"decoder\":[\"static_value\",\"thus far unknown - please report your model version\"]},\"_version\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",10,4],\"lookup\":[\"0e20\",\"AirPods Pro\",\"0f20\",\"AirPods ?? - please report if correct model version\"]},\"color\":{\"decoder\":[\"static_value\",\"thus far unknown - please report your color\"]},\"_color\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",21,2],\"lookup\":[\"00\",\"white\"]},\"status\":{\"decoder\":[\"static_value\",\"thus far unknown - please report your status\"]},\"_status\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",14,2],\"lookup\":[\"55\",\"Both AirPods in case\",\"22\",\"Both AirPods not in case ??\"]},\"batt_r\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",16,1],\"post_proc\":[\"*\",10,\"max\",100]},\"batt_l\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",17,1],\"post_proc\":[\"*\",10,\"max\",100]},\"batt_case\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",19,1],\"post_proc\":[\"*\",10,\"max\",100]},\"charging_r\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",18,1,false,true]},\"charging_l\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",18,0,false,true]},\"charging_case\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",18,2,false,true]}}}";
/*R""""(
{
   "brand":"Apple/Beats",
   "model":"AirPods (Pro)/Solo|Studio Buds",
   "model_id":"APPLEAIRPODS",
   "tag":"0b08",
   "condition":["manufacturerdata", "index", 8, "01", "&", "manufacturerdata","=", 58, "index", 0, "4c0007"],
   "properties":{
      "version":{
         "decoder":["static_value", "thus far unknown - please report your model version"]
      },
      "_version":{
         "decoder":["string_from_hex_data", "manufacturerdata", 10, 4],
         "lookup":["0e20", "AirPods Pro",
                   "0f20", "AirPods ?? - please report if correct model version"]
      },
      "color":{
         "decoder":["static_value", "thus far unknown - please report your color"]
      },
      "_color":{
         "decoder":["string_from_hex_data", "manufacturerdata", 21, 2],
         "lookup":["00", "white"]
      },
      "status":{
         "decoder":["static_value", "thus far unknown - please report your status"]
      },
      "_status":{
         "decoder":["string_from_hex_data", "manufacturerdata", 14, 2],
         "lookup":["55", "Both AirPods in case",
                   "22", "Both AirPods not in case ??"]
      },
      "batt_r":{
         "decoder":["value_from_hex_data", "manufacturerdata", 16, 1],
         "post_proc":["*", 10, "max", 100]
      },
      "batt_l":{
         "decoder":["value_from_hex_data", "manufacturerdata", 17, 1],
         "post_proc":["*", 10, "max", 100]
      },
      "batt_case":{
         "decoder":["value_from_hex_data", "manufacturerdata", 19, 1],
         "post_proc":["*", 10, "max", 100]
      },
      "charging_r":{
         "decoder":["bit_static_value", "manufacturerdata", 18, 1, false, true]
      },
      "charging_l":{
         "decoder":["bit_static_value", "manufacturerdata", 18, 0, false, true]
      },
      "charging_case":{
         "decoder":["bit_static_value", "manufacturerdata", 18, 2, false, true]
      }
   }
})"""";*/

const char* _APPLEAIRPODS_json_props = "{\"properties\":{\"version\":{\"unit\":\"string\",\"name\":\"model version\"},\"color\":{\"unit\":\"string\",\"name\":\"color\"},\"status\":{\"unit\":\"string\",\"name\":\"status\"},\"batt_r\":{\"unit\":\"%\",\"name\":\"batt\"},\"batt_l\":{\"unit\":\"%\",\"name\":\"batt\"},\"batt_case\":{\"unit\":\"%\",\"name\":\"batt\"},\"charging_r\":{\"unit\":\"status\",\"name\":\"battery_charging\"},\"charging_l\":{\"unit\":\"status\",\"name\":\"battery_charging\"},\"charging_case\":{\"unit\":\"status\",\"name\":\"battery_charging\"}}}";
/*R""""(
{
   "properties":{
      "version":{
         "unit":"string",
         "name":"model version"
      },
      "color":{
         "unit":"string",
         "name":"color"
      },
      "status":{
         "unit":"string",
         "name":"status"
      },
      "batt_r":{
         "unit":"%",
         "name":"batt"
      },
      "batt_l":{
         "unit":"%",
         "name":"batt"
      },
      "batt_case":{
         "unit":"%",
         "name":"batt"
      },
      "charging_r":{
         "unit":"status",
         "name":"battery_charging"
      },
      "charging_l":{
         "unit":"status",
         "name":"battery_charging"
      },
      "charging_case":{
         "unit":"status",
         "name":"battery_charging"
      }
   }
})"""";*/
