int trig =12;
int echo = 13;
float Tt;
float v=0.034,t,s;

void setup() {
  // put your setup code here, to run once:
 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);

 Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,LOW);
  delayMicroseconds(5);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

   Tt = pulseIn(echo,HIGH);

   t = Tt/2.0;
   s = v*t;
   Serial.println(s);
}
