int knapp = 0;
int pot = 0;

void setup() {
  pinMode(7, INPUT);
  Serial.begin(2000000);
}

void loop() {
  knapp = digitalRead(7);
  pot = analogRead(A0);

  Serial.write(pot);
  delay(1000);
}
