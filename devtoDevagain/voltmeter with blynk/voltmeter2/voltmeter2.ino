/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Follow us:                  http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  This example runs directly on ESP32 chip.

  Note: This requires ESP32 support package:
    https://github.com/espressif/arduino-esp32

  Please be sure to select the right ESP32 module
  in the Tools -> Board menu!

  Change WiFi ssid, pass, and Blynk auth token to run :)
  Feel free to apply it to any other example. It's simple!
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "M9Zr6EjZTZ9l6bQVFyS2RClmqg7TmeKP";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "RUET--Employee";
char pass[] = "RUETEM#789";
String x;

void setup()
{
  // Debug console
  Serial.begin(9600);
  Serial2.begin(115200);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
   if (Serial2.available() > 0)
  {
    String x = Serial2.readString();
   // Serial.print(x);
    Blynk.virtualWrite(V7,x);
    delay(2000);
  }
  
  
}

