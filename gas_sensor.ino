#define ANALOG_PIN 34  // MQ-135 Analog output to ESP32 ADC

void setup() {
    Serial.begin(115200);
}

void loop() {
    int analogValue = analogRead(ANALOG_PIN); // Read analog value
    Serial.print("MQ-135 Analog Value: ");
    Serial.println(analogValue);
    
    delay(5000); // Wait for 1 second
}

