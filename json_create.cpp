void create_json(Measure &m, YuccaObj &smartobj)
{
  char buf[25] = { 0 };
  snprintf(buf, 25, "%d-%02d-%02dT%02d:%02d:%02dZ", year(now()),
        month(now()), day(now()), hour(now()),
        minute(now()), second(now()));

            
  json = "{";  
  json += "\"sensor\":\"";
  json += smartobj.uuid;
  json += "\",\"stream\":\"";
  json += smartobj.stream;
  json += "\",\"values\":[{\"time\":\"";
  json += buf;
  json += "\",\"components\":{";

  json += "\"id\":\"";
  json += smartobj.id;
  json += "\",";

  json += "\"T\":";
  json += m.temperature;
  json += ",";
  json += "\"H\":";
  json += m.humidity;
  json += ",";
  json += "\"lux\":";
  json += m.light;  
  json += ",";
  json += "\"VOC\":";
  json += m.voc;
  if (  m.co2 > 0 )
  {
    json += ",";
    json += "\"CO2\":";
    json += m.co2;
  }
  json += "}}]";
  json+="}";

  // Create json for MQTT
//global_json= json;
  global_json = "{";  
  global_json += "\"time\":\"";
  global_json += buf;
  global_json += "\",";
  global_json += "\"id\":\"";
  global_json += smartobj.id;
  global_json += "\",";
  global_json += "\"T\":";
  global_json += m.temperature;
  global_json += ",";
  global_json += "\"H\":";
  global_json += m.humidity;
  global_json += ",";
  global_json += "\"lux\":";
  global_json += m.light;  
  global_json += ",";
  global_json += "\"VOC\":";
  global_json += m.voc;
  global_json += ",";
  global_json += "\"CO2\":";
  global_json += m.co2;
  global_json += "}";
}
