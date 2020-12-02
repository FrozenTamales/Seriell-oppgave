void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}
int incomingByte = 0; // for incoming serial data
void loop() {
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();
    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);
  }
  if (incomingByte == 1) {
    digitalWrite(8, HIGH);
  }
  else {
    digitalWrite(8, LOW);
  }
}
