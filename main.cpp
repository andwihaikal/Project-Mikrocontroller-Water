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

//================ WEB ==================


String webpage()
{
return
"<html>"

"<head>"

"<meta http-equiv='refresh' content='2'>"

"<meta name='viewport' content='width=device-width, initial-scale=1'>"

"<style>"

"*{margin:0;padding:0;box-sizing:border-box;}"

"body{"
"font-family:Arial;"
"background:linear-gradient(135deg,#0F172A,#1E293B);"
"height:100vh;"
"display:flex;"
"justify-content:center;"
"align-items:center;"
"color:white;"
"}"

".container{"
"width:380px;"
"padding:25px;"
"border-radius:20px;"
"background:rgba(255,255,255,0.1);"
"backdrop-filter:blur(10px);"
"box-shadow:0px 0px 20px rgba(0,0,0,0.4);"
"text-align:center;"
"}"

"h1{"
"margin-bottom:20px;"
"font-size:28px;"
"}"

".card{"
"background:white;"
"color:black;"
"padding:15px;"
"margin-top:15px;"
"border-radius:15px;"
"font-size:18px;"
"font-weight:bold;"
"}"

".jarak{"
"font-size:30px;"
"color:#2563EB;"
"}"

".nyala{"
"color:green;"
"}"

".mati{"
"color:red;"
"}"

"</style>"

"</head>"

"<body>"

"<div class='container'>"

"<h1> Smart Galon Monitor</h1>"

"<div class='card'>"
"Jarak Air"
"<br><br>"
"<span class='jarak'>"
+String(distance)+
" cm</span>"
"</div>"

"<div class='card'>"
"LED Biru : "
+statusLED1+
"</div>"

"<div class='card'>"
"LED Kedua : "
+statusLED2+
"</div>"

"<div class='card'>"
"Buzzer : "
+statusBuzzer+
"</div>"

"<br>"
"<small>Update otomatis setiap 2 detik</small>"

"</div>"

"</body>"

"</html>";
}



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


//================ TASK OUTPUT ==================


// LOGIKA
if(distance>=2 && distance<=5)
{
digitalWrite(ledBiru,HIGH);

statusLED1="NYALA";
}


if(distance>=7 && distance<=14)
{
digitalWrite(ledDua,HIGH);

statusLED2="NYALA";
}


if(distance>30 || distance==0)
{
digitalWrite(buzzerPin,HIGH);

statusBuzzer="NYALA";
}


vTaskDelay(
500/portTICK_PERIOD_MS);

}
}

//================ TASK WEB ==================

// WIFI
WiFi.begin(ssid,password);

while(
WiFi.status()!=WL_CONNECTED)
{
delay(500);

Serial.print(".");
}

Serial.println("");
Serial.println("Connected");

Serial.print("IP:");
Serial.println(WiFi.localIP());

// WEB

// RTOS
