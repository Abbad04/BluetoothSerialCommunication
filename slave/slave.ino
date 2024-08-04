void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT); // Set pin 9 as an output for the LED
}

void loop() {
  if (Serial.available()) {
    int receivedValue = Serial.parseInt(); // Read the integer value
    Serial.println(receivedValue); // Print the received value for debugging
    
    // Map the received value from the potentiometer range (0-1023) to the PWM range (0-255)
    int pwmValue = map(receivedValue, 0, 1023, 0, 255);
    
    // Write the PWM value to pin 9 to control the LED brightness
    analogWrite(9, pwmValue);
  }
}
