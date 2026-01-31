/* Voice Controlled Fan using ESP32
  Control via Mobile Phone (Google Mic) using Bluetooth */

#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

const int relayPin = 23;  
String command = "";

void setup() {
  pinMode(relayPin, OUTPUT);

  digitalWrite(relayPin, HIGH);

  Serial.begin(9600);
  SerialBT.begin("ESP32_Voice_Fan"); 

  Serial.println("ESP32 Voice Controlled Fan Ready");
}

void loop() {
  while (SerialBT.available()) {
    char c = SerialBT.read();
    command += c;
    delay(5);
  }

  if (command.length() > 0) {
    Serial.println("Received: " + command);
    command.toLowerCase();

    if (command.indexOf("on") >= 0) {
      digitalWrite(relayPin, LOW); 
      Serial.println("Fan ON");
      SerialBT.println("Fan ON");
    }

    else if (command.indexOf("off") >= 0) {
      digitalWrite(relayPin, HIGH);  
      Serial.println("Fan OFF");
      SerialBT.println("Fan OFF");
    }

    command = ""; 
  }
}
