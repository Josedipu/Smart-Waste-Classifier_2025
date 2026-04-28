#include <HardwareSerial.h>
#include <TinyGPS++.h>

// Create an instance of the GPS module and serial ports
TinyGPSPlus gps;
HardwareSerial mySerial(1); // Use hardware serial port 1 (pins GPIO 16 (RX) and GPIO 17 (TX))

void setup() {
  Serial.begin(115200);          // Initialize Serial Monitor for debugging
  mySerial.begin(9600, SERIAL_8N1, 16, 17); // GPS baud rate and pin setup

  Serial.println("GPS Example");
}

void loop() {
  while (mySerial.available() > 0) {
    gps.encode(mySerial.read()); // Parse incoming GPS data
    if (gps.location.isUpdated()) {
      Serial.print("Latitude= "); 
      Serial.print(gps.location.lat(), 6); 
      Serial.print(" Longitude= "); 
      Serial.println(gps.location.lng(), 6);
    }
  }
}
