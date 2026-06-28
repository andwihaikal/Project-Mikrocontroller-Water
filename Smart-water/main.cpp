#include <Arduino.h>
#include <WiFi.h>
#include <WebServer.h>

// WIFI
const char* ssid="NAMA_WIFI"; //Ganti nama wifi sendiri
const char* password="PASSWORD_WIFI"; //Ganti password wifi sendiri

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
