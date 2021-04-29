void setup() {

  Serial.begin(115200);
}

void loop() {

  if (Serial.available() > 0)
  {
    char x = char(Serial.read());
    Serial.print(x);
  }
}
