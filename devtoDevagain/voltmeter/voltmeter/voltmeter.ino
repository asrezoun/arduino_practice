int re;
float volt;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  re = analogRead(A0);
  volt = 30*re/1024.0;
  Serial.println(re);
  delay(200);
}
