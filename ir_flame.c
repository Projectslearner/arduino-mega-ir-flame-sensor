/*
    Project name : IR Flame Sensor
    Modified Date: 13-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-ir-flame-sensor
*/

const int flameSensorPin = 2; // Pin connected to the IR flame sensor module

void setup() {
  Serial.begin(9600); // Initialize serial communication for debugging
  pinMode(flameSensorPin, INPUT); // Set flame sensor pin as input
}

void loop() {
  // Read the state of the flame sensor pin
  int flameState = digitalRead(flameSensorPin);

  // Print the state to Serial Monitor
  Serial.print("Flame Sensor State: ");
  Serial.println(flameState);

  // If flame is detected (active LOW), print "Flame detected"
  if (flameState == LOW) {
    Serial.println("Flame Detected");
  }

  delay(100); // Add a small delay to debounce the sensor
}
