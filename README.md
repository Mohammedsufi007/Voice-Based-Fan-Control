Voice-Based-Fan-Control
Voice-Controlled Fan is an Arduino-based smart home project that allows users to control a fan using voice commands through speech recognition, demonstrating basic IoT automation and hands-free appliance control.

🔊 Voice-Controlled Fan using Arduino

A *Voice-Controlled Fan* project developed using *Arduino, enabling users to control a fan through voice commands. This project demonstrates the practical implementation of **smart home automation* using speech recognition and microcontroller integration.

📌 Project Description

This project allows a user to turn a fan *ON or OFF using voice commands* given through a smartphone. The voice input is processed using a speech recognition system and transmitted to the Arduino via a communication module (Bluetooth or Wi-Fi). Based on the received command, Arduino controls the fan using a relay module.

🎯 Objectives

- To implement hands-free control of household appliances  
- To demonstrate Arduino-based IoT automation  
- To understand speech recognition and microcontroller interfacing  
- To build a low-cost smart home prototype  

⚙️ Working Principle

1. The user gives a voice command through a mobile phone.
2. The voice command is converted into text using speech recognition.
3. The command is sent to the Arduino via Bluetooth or Wi-Fi.
4. Arduino processes the command logic.
5. A relay module switches the fan ON or OFF accordingly.

🧠 Components Required

- Arduino UNO / Nano  
- Relay Module  
- Fan (AC)  
- Bluetooth Module (HC-05) *or* Wi-Fi Module (ESP8266)  
- Smartphone (Voice control app / Google Assistant)  
- Power Supply  
- Jumper Wires

🔧 Components Used

--ESP32 Development Board
-Serves as the main microcontroller of the system. It receives control commands and executes the switching logic for the fan.

--Single Channel Relay Module (5V)
-Used to safely control the fan by switching the power supply ON and OFF, providing isolation between the ESP32 and the load.

--DC Fan
-Acts as the output device and operates according to the commands processed by the ESP32.

--9V Battery with Connector
-Supplies power to the fan circuit.

--Jumper Wires
-Used for electrical connections between the ESP32, relay module, and power source.

--USB Cable
-Used to power the ESP32 and upload the program from the computer.

--Laptop / PC
-Used for programming the ESP32 using the Arduino IDE and for monitoring system behavior.

--Smartphone (Google Microphone)
-Used for voice activation. The Google microphone converts voice commands into text and sends control instructions to the ESP32.

🛠️ Software & Tools Used

- Arduino IDE  
- Embedded C / Arduino Programming  
- Speech Recognition (Mobile-based)  

✨ Features

- Voice-controlled fan operation  
- Hands-free appliance control  
- Cost-effective and easy to implement  
- Ideal for smart home automation projects  

🎙️ Sample Voice Commands

- "Turn ON the fan"  
- "Turn OFF the fan"  

🚀 Applications

- Smart home automation  
- Assistive technology  
- Energy-saving systems  
- Home appliance control  

⚠️ Limitations

- Limited range depending on communication module  
- Voice recognition accuracy depends on environment  
- Basic security implementation  

🔮 Future Enhancements

- Fan speed control  
- Mobile application with GUI  
- Integration with sensors (temperature-based control)  
- Cloud-based IoT monitoring
