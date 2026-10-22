#include <Arduino.h>
#include <WiFi.h>
#include <HTTPClient.h>

const char *nameWiFe = "**********";
const char *passwordWiFe = "*********";

String askForApi(String,String);

void setup()
{
  Serial.begin(115200);

  WiFi.begin(nameWiFe, passwordWiFe);
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(300);
  }

  Serial.print("Wife Connected");


}

void loop()
{
}

String askForApi(String address,String param)
{
  String info = "";

  HTTPClient http;
  int httpCode;

  http.begin(address + param);
  httpCode = http.GET();

  if(httpCode = 200)
  {
    info = http.getString();
  }
  else
  {
    Serial.printf("Error Code : %d",httpCode);
  }


  http.end();
  return info;
}
