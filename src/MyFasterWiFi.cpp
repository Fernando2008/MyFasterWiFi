#include "MyFasterWiFi.h"

MyFasterWiFi::MyFasterWiFi(char ssid[], char password[]){
  _ssid = ssid;
  _password = password;
}

void MyFasterWiFi::WiFiConnection() {
  while (WiFi.status() != WL_CONNECTED) {
    if (WiFi.begin(_ssid, _password) == WL_CONNECTED) {
      Serial.println("WiFi Connected Successfully!");
    } else {
      Serial.println("WiFi Error During Connectiob. Check Your Credentials.");
    }
    delay(10000);
    Serial.println("Connection...");
  }
}
