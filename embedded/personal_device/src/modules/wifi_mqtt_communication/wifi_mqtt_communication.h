#ifndef WIFI_MQTT_COMMUNICATION_H
#define WIFI_MQTT_COMMUNICATION_H

#include <WiFi.h>
#include <PubSubClient.h>
#include <ArduinoJson.h>
#include "../persistence/persistence.h"
#include "../utils/serial_logger/serial_logger.h"
#include "../utils/globals.h"
#include "../display/display.h"
#include "../display/images.h"

namespace WIFI_MQTT_COM {

    extern WiFiClient *wifiClient;
    extern PubSubClient *mqttClient;

    // MQTT Credentials
    const String MQTT_HOST = "DOMAIN";
    const String MQTT_USER = "USER";
    const String MQTT_PASSWORD = "PASSWORD";
    const uint16_t MQTT_PORT = 1883;
    const String MQTT_PAIR_TOPIC = "broker/pairing_device";
    // WiFi Credentials
    const String WIFI_SSID = "TEST-NETWORK";
    const String WIFI_PASSWORD = "TEST-PASSWORD";
    // General Timeout
    const uint8_t CONNECTION_TIMEOUT = 30;


    extern bool isListening;

    void mqtt_pair_callback(char *topic, byte *payload, unsigned int length);

    void analyzePairRequest(const String &message);

    bool initWifiMQTT();
}

#endif //WIFI_MQTT_COMMUNICATION_H
