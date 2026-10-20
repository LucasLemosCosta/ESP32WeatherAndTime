#include <Arduino.h>
#include <WiFi.h>

char *nameWiFe = "Bento & Thor";
char *passwordWiFe = "Lucasfilho68";

void setup()
{
  Serial.begin(112500);

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
