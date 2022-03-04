const char* _ABN03_json = "{\"brand\":\"AprilBrother\",\"model\":\"N03\",\"model_id\":\"ABSensor_N03\",\"condition\":[\"servicedata\",\"index\",0,\"ab03\"],\"properties\":{\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,2,false]},\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,4,true,true],\"post_proc\":[\"/\",8]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,4,true],\"post_proc\":[\"/\",2]},\"lux\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",26,4,true]}}}";
/* R""""(
{
   "brand":"AprilBrother",
   "model":"N03",
   "model_id":"ABSensor_N03",
   "condition":["servicedata", "index", 0, "ab03"],
   "properties":{
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 16, 2, false]
      },
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 18, 4, true, true],
         "post_proc":["/", 8]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 22, 4, true],
         "post_proc":["/", 2]
      },
      "lux":{
         "decoder":["value_from_hex_data", "servicedata", 26, 4, true]
      }
   }
})"""";*/

const char* _ABN03_json_props = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"lux\":{\"unit\":\"lx\",\"name\":\"illuminance\"}}}";
/*R""""(
{
   "properties":{
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "lux":{
         "unit":"lx",
         "name":"illuminance"
      }
   }
})"""";*/