/*
 * Modified by Hamish
 * Original tutorial: ArduinoGetStarted.com
 *
 * replaces a pushbutton with a potentiometer.
 * The LED turns on when analog signal exceeds threshold.
 */

// Constant pin numbers
const int LED_PIN = 3;      // LED pin (output)
const int VAR_RES_PIN = A0; // Analog output pin

// Threshold value for detection
const int THRESHOLD = 512; 

void setup() {
  // Initialize LED pin as output
  pinMode(LED_PIN, OUTPUT);
  
  // Initialize serial monitor for debugging (optional)
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the sound sensor
  int sensorValue = analogRead(VAR_RES_PIN);
  
  // Debug: Print the current sensor value to the Serial Monitor
  // Serial.print("Sound Level: ");
  // Serial.println(sensorValue);

  // Control LED
  if (sensorValue > THRESHOLD) {
    digitalWrite(LED_PIN, HIGH); // Turn ON LED
  } else {
    digitalWrite(LED_PIN, LOW);  // Turn OFF LED
  }

  // Small delay to stabilize
  delay(10);
}