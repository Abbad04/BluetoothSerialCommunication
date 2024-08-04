void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT); // Set pin 9 as an output
}

void loop() {
    digitalWrite(9, HIGH);
  }
}
