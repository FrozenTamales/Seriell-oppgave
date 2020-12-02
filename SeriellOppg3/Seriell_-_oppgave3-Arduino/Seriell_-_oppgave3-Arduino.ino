int knapp = 0;
int potMeter = 0;

void setup() {
  pinMode(7, INPUT);

  Serial.begin(2000000);
}

void loop() {
  knapp = digitalRead(7);

  Serial.print(knapp);
  delay(1000);
}
