const char* _EUFYC1P1_json = "{\"brand\":\"Eufy\",\"model\":\"Smart Scale\",\"model_id\":\"C1/P1\",\"tag\":\"0501\",\"condition\":[\"manufacturerdata\",\"index\",36,\"9146\",\"|\",\"manufacturerdata\",\"index\",36,\"9147\",\"&\",\"manufacturerdata\",\"=\",40,\"index\",12,\"cf\"],\"properties\":{\"weight\":{\"condition\":[\"manufacturerdata\",30,\"00\",\"&\",\"manufacturerdata\",29,\"bit\",0,0],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,false],\"post_proc\":[\"/\",100]},\"_weight\":{\"condition\":[\"manufacturerdata\",30,\"00\",\"&\",\"manufacturerdata\",29,\"bit\",0,1],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,false],\"post_proc\":[\"/\",100,\"*\",2.204623]},\"__weight\":{\"condition\":[\"manufacturerdata\",30,\"02\"],\"decoder\":[\"static_value\",\"weight limit exceeded\"]},\"unit\":{\"condition\":[\"manufacturerdata\",30,\"00\"],\"decoder\":[\"bit_static_value\",\"manufacturerdata\",29,0,\"kg\",\"lb\"]},\"impedance\":{\"condition\":[\"manufacturerdata\",30,\"00\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,false],\"post_proc\":[\"/\",10]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",34,2,false,false],\"post_proc\":[\"&\",127]},\"mac\":{\"decoder\":[\"mac_from_hex_data\",\"manufacturerdata\",0]}}}";
/*R""""(
{
   "brand":"Eufy",
   "model":"Smart Scale",
   "model_id":"C1/P1",
   "tag":"0501",
   "condition":["manufacturerdata", "index", 36, "9146", "|", "manufacturerdata", "index", 36, "9147", "&", "manufacturerdata", "=", 40, "index", 12, "cf" ],
   "properties":{
      "weight":{
         "condition":["manufacturerdata", 30, "00", "&", "manufacturerdata", 29, "bit", 0, 0],
         "decoder":["value_from_hex_data", "manufacturerdata", 18, 4, true, false],
         "post_proc":["/", 100]
      },
      "_weight":{
         "condition":["manufacturerdata", 30, "00", "&", "manufacturerdata", 29, "bit", 0, 1],
         "decoder":["value_from_hex_data", "manufacturerdata", 18, 4, true, false],
         "post_proc":["/", 100, "*", 2.204623]
      },
      "__weight":{
         "condition":["manufacturerdata", 30, "02"],
         "decoder":["static_value", "weight limit exceeded"]
      },
      "unit":{
         "condition":["manufacturerdata", 30, "00"],
         "decoder":["bit_static_value", "manufacturerdata", 29, 0, "kg", "lb"]
      },
      "impedance":{
         "condition":["manufacturerdata", 30, "00"],
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 4, true, false],
         "post_proc":["/", 10]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 34, 2, false, false],
         "post_proc":["&", 127]
      },
      "mac":{
         "decoder":["mac_from_hex_data", "manufacturerdata", 0]
      }
   }
})"""";*/

const char* _EUFYC1P1_json_props = "{\"properties\":{\"weight\":{\"unit\":\"kg\",\"name\":\"weight\"},\"unit\":{\"unit\":\"string\",\"name\":\"unit\"},\"impedance\":{\"unit\":\"Ω\",\"name\":\"impedance\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
/*R""""(
{
   "properties":{
      "weight":{
         "unit":"kg",
         "name":"weight"
      },
      "unit":{
         "unit":"string",
         "name":"unit"
      },
      "impedance":{
         "unit":"Ω",
         "name":"impedance"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
