#include <Arduino.h>
#include <WiFi.h>
#include <WebServer.h>

// WIFI
const char* ssid="JEMBAR";
const char* password="nugrahadiraksa";

WebServer server(80);

// HC-SR04
const int trigPin=23;
const int echoPin=19;

// LED
const int ledBiru=25;
const int ledDua=26;

// Buzzer
const int buzzerPin=27;

long duration=0;
int distance=0;

String statusLED1="MATI";
String statusLED2="MATI";
String statusBuzzer="MATI";




//================ TASK SENSOR ==================

void TaskSensor(void *pvParameters)
{
while(true)
{

digitalWrite(trigPin,LOW);
delayMicroseconds(2);

digitalWrite(trigPin,HIGH);
delayMicroseconds(10);

digitalWrite(trigPin,LOW);

duration=
pulseIn(
echoPin,
HIGH,
30000);

if(duration!=0)
{
distance=
duration*0.034/2;
}

Serial.print("Jarak:");
Serial.println(distance);

vTaskDelay(
500/portTICK_PERIOD_MS);

}
}


