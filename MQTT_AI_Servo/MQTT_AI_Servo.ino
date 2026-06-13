#include <WiFi.h>
#include <PubSubClient.h>
#include <ESP32Servo.h>

// =====================
// WiFi
// =====================
const char* ssid = "fiborobotlab_2.4G";
const char* password = "fiborobotlab";

// =====================
// MQTT
// =====================
const char* mqtt_server = "broker.hivemq.com";
const int mqtt_port = 1883;
const char* mqtt_topic = "FIBO/ai/predict/FIBO_01";

// =====================
// Servo + LED
// =====================
Servo myServo;
const int servoPin = 13;
const int ledPin = 16;

// =====================
WiFiClient espClient;
PubSubClient client(espClient);

unsigned long lastWifiCheck = 0;
unsigned long lastMqttCheck = 0;

void connectWiFi()
{
  Serial.println("\n====================");
  Serial.println("Connecting WiFi");
  Serial.println("====================");

  WiFi.mode(WIFI_STA);
  WiFi.setSleep(false);

  WiFi.disconnect(true);
  delay(1000);

  WiFi.begin(ssid, password);

  int retry = 0;

  while (WiFi.status() != WL_CONNECTED && retry < 30)
  {
    delay(500);
    Serial.print(".");
    retry++;
  }

  Serial.println();

  if (WiFi.status() == WL_CONNECTED)
  {
    Serial.println("WiFi Connected");
    Serial.print("IP Address : ");
    Serial.println(WiFi.localIP());
    Serial.print("RSSI : ");
    Serial.println(WiFi.RSSI());
  }
  else
  {
    Serial.println("WiFi Connection Failed");
    Serial.print("Status Code : ");
    Serial.println(WiFi.status());
  }
}

void callback(char* topic, byte* payload, unsigned int length)
{
  String msg = "";

  for (unsigned int i = 0; i < length; i++)
  {
    msg += (char)payload[i];
  }

  Serial.println("--------------------------------");
  Serial.print("Topic : ");
  Serial.println(topic);

  Serial.print("Message : ");
  Serial.println(msg);

  if (msg == "0")
  {
    digitalWrite(ledPin, LOW);
    myServo.write(0);

    Serial.println("LED OFF");
    Serial.println("Servo 0");
  }
  else if (msg == "1")
  {
    digitalWrite(ledPin, HIGH);
    myServo.write(90);

    Serial.println("LED ON");
    Serial.println("Servo 90");
  }
}

void reconnectMQTT()
{
  if (WiFi.status() != WL_CONNECTED)
  {
    return;
  }

  while (!client.connected())
  {
    Serial.print("Connecting MQTT...");

    String clientId = "ESP32-";
    clientId += String((uint32_t)ESP.getEfuseMac(), HEX);

    if (client.connect(clientId.c_str()))
    {
      Serial.println(" SUCCESS");

      client.subscribe(mqtt_topic);

      Serial.print("Subscribed : ");
      Serial.println(mqtt_topic);
    }
    else
    {
      Serial.print(" FAILED rc=");
      Serial.println(client.state());

      delay(3000);
    }
  }
}

void setup()
{
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  ESP32PWM::allocateTimer(0);

  myServo.setPeriodHertz(50);
  myServo.attach(servoPin, 500, 2400);
  myServo.write(0);

  connectWiFi();

  client.setServer(mqtt_server, mqtt_port);
  client.setCallback(callback);

  Serial.println("System Ready");
}

void loop()
{
  if (millis() - lastWifiCheck > 5000)
  {
    lastWifiCheck = millis();

    if (WiFi.status() != WL_CONNECTED)
    {
      Serial.println("WiFi Lost -> Reconnecting");
      connectWiFi();
    }
  }

  if (millis() - lastMqttCheck > 3000)
  {
    lastMqttCheck = millis();

    if (!client.connected())
    {
      reconnectMQTT();
    }
  }

  client.loop();
}