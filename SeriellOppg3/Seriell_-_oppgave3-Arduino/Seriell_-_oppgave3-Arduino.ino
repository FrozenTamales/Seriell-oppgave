int knapp = 0;

void setup() {
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop() {
  knapp = digitalRead(7);

  if (knapp == HIGH) {
    Serial.write("Knapp aktivert!");
  }
  else {
    Serial.write("");
  }
  delay(1000);
}
