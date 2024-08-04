void setup() {
  Serial.begin(9600);
}

void loop() {
    int value = analogRead(A0);
    Serial.println(value); // Send the value to the slave as a string
    delay(50); // Wait for 50 milliseconds
}
