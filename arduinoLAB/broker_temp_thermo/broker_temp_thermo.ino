/*
 *
 * This Arduino UNO R4 code is made available for public use without any restriction
 *
 */

#include <WiFiS3.h>
#include <MQTTClient.h>

const char WIFI_SSID[] = "Galaxy kae";          // CHANGE TO YOUR WIFI SSID
const char WIFI_PASSWORD[] = "123456789";  // CHANGE TO YOUR WIFI PASSWORD

const char MQTT_BROKER_ADRRESS[] = "phycom.it.kmitl.ac.th";  // CHANGE TO MQTT BROKER'S ADDRESS
const int MQTT_PORT = 1883; //portของmqtt
const char MQTT_CLIENT_ID[] = "Server_1730431423834";  // CHANGE IT AS YOU DESIRE
const char MQTT_USERNAME[] = "";                                            // CHANGE IT IF REQUIRED, empty if not required
const char MQTT_PASSWORD[] = "";                                            // CHANGE IT IF REQUIRED, empty if not required

// The MQTT topics that Arduino should publish/subscribe //ช่อง
const char PUBLISH_TOPIC[] = "66070248/temp";    // CHANGE IT AS YOU DESIRE
const char SUBSCRIBE_TOPIC[] = "66070248/temp";  // CHANGE IT AS YOU DESIRE

const int PUBLISH_INTERVAL = 5000;  // 60 seconds //delayส่งค่า

WiFiClient network;
MQTTClient mqtt = MQTTClient(256);

unsigned long lastPublishTime = 0;

// Thermistor parameters from the datasheet
#define RT0 10000
#define B 4050

// Our series resistor value = 10 kΩ
#define R 10000  

// Variables for calculations
float RT, VR, ln, TX, T0, VRT;

void setup() {
  Serial.begin(9600);

  int status = WL_IDLE_STATUS;
  while (status != WL_CONNECTED) {
    Serial.print("Arduino UNO R4 - Attempting to connect to SSID: ");
    Serial.println(WIFI_SSID);
    // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
    status = WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  // Convert T0 from Celsius to Kelvin
  T0 = 25 + 273.15;

    // wait 10 seconds for connection:
    delay(10000);
  }
  // print your board's IP address:
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  connectToMQTT();
}

void loop() {
  mqtt.loop();

  if (millis() - lastPublishTime > PUBLISH_INTERVAL) {
    sendToMQTT();
    lastPublishTime = millis();
  }
}

void connectToMQTT() {
  // Connect to the MQTT broker
  mqtt.begin(MQTT_BROKER_ADRRESS, MQTT_PORT, network);

  // Create a handler for incoming messages
  mqtt.onMessage(messageHandler);

  Serial.print("Arduino UNO R4 - Connecting to MQTT broker");

  while (!mqtt.connect(MQTT_CLIENT_ID, MQTT_USERNAME, MQTT_PASSWORD)) {
    Serial.print(".");
    delay(100);
  }
  Serial.println();

  if (!mqtt.connected()) {
    Serial.println("Arduino UNO R4 - MQTT broker Timeout!");
    return;
  }

  // Subscribe to a topic, the incoming messages are processed by messageHandler() function
  if (mqtt.subscribe(SUBSCRIBE_TOPIC))
    Serial.print("Arduino UNO R4 - Subscribed to the topic: ");
  else
    Serial.print("Arduino UNO R4 - Failed to subscribe to the topic: ");

  Serial.println(SUBSCRIBE_TOPIC);
  Serial.println("Arduino UNO R4 - MQTT broker Connected!");
}

void sendToMQTT() {

  int val = millis();
  int value = analogRead(A0);
  VRT = (5.00 / 1023.00)*value;
  // Calculate the voltage across the resistor
  VR = 5.00 - VRT;
  // Calculate resistance of the thermistor
  RT = VRT / (VR / R);
  // Calculate temperature from thermistor resistance
  ln = log(RT / RT0);
  TX = (1 / ((ln / B) + (1 / T0)));
  // Convert to Celsius
  TX = TX - 273.15;
  String val_str = String(TX);

  // Convert the string to a char array for MQTT publishing
  char messageBuffer[10];
  val_str.toCharArray(messageBuffer, 10);

  // Publish the message to the MQTT topic
  mqtt.publish(PUBLISH_TOPIC, messageBuffer);

  // Print debug information to the Serial Monitor in one line
  Serial.println("Arduino UNO R4 - sent to MQTT: topic: " + String(PUBLISH_TOPIC) + " | payload: " + String(messageBuffer));
}

// void sendToMQTT() {
//   // Check if there's data available to read from the Serial Monitor
//   if (Serial.available() > 0) {
//     // Read the input from the Serial Monitor as a string
//     String val_str = Serial.readStringUntil('\n');

//     // Convert the string to a char array for MQTT publishing
//     char messageBuffer[10];
//     val_str.toCharArray(messageBuffer, 10);

//     // Publish the message to the MQTT topic
//     mqtt.publish(PUBLISH_TOPIC, messageBuffer);

//     // Print debug information to the Serial Monitor in one line
//     Serial.println("Arduino UNO R4 - sent to MQTT: topic: " + String(PUBLISH_TOPIC) + " | payload: " + String(messageBuffer));
//   }
// }

void messageHandler(String &topic, String &payload) {
  Serial.println("Arduino UNO R4 - received from MQTT: topic: " + topic + " | payload: " + payload);

  // You can process the incoming data , then control something
  /*
  process something
  */
}

