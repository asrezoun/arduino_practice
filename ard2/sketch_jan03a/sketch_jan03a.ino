int inpin = 5;
int outpin = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(inpin,INPUT);
  pinMode(outpin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 if(digitalRead(inpin))
 {
  digitalWrite(outpin,HIGH);
 }else
 {
  digitalWrite(outpin,LOW);
 }
}
