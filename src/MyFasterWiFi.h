#ifndef MyFasterWiFi_h
#define MyFasterWiFi_h

#include <Arduino.h>
#include <WiFiNINA.h>

class MyFasterWiFi {
  public:
    MyFasterWiFi(char ssid[], char password[]);
    void WiFiConnection();
  private:
    char* _ssid;
    char* _password;
};


#endif
