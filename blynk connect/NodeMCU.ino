
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "OzWDx0SV56R_oX1vWxx_MM5-69Ya06Dh";


char ssid[] = "SLT_4GLTE";
char pass[] = "39224C02";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  pinMode(D0,INPUT);
  pinMode(D1,INPUT);
}

void loop()
{
  Blynk.run();
  
}
