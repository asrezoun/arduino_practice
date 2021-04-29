void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial3.begin(115200);
}

void loop() {

  if (Serial.available() > 0)
  {
    Serial3.print(char(Serial.read()));
  }
  if (Serial3.available() > 0)
  {
    Serial.print(char(Serial3.read()));
  }
}
