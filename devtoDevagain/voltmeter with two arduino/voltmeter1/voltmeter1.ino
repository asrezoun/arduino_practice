int re;
float volt;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial3.begin(115200);
  pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  re = analogRead(A0);
  volt = 30*re/1024.0;
  Serial3.println(volt);
  
  delay(200);
}
