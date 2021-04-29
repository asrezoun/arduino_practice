
char data;
int EnA = 6;
int IN1 = 7;
int IN2 = 8;
int IN3 = 9;
int IN4 = 10;
int EnB = 11;

int SPEED;9

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(EnA,OUTPUT);
    pinMode(IN1,OUTPUT);
    pinMode(IN2,OUTPUT);
    pinMode(IN3,OUTPUT);
    pinMode(IN4,OUTPUT);
    pinMode(EnB,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available()>1)
  {
   data= Serial.read();
  }
  if(data == 'F') {FORWARD();}
  else if(data =='B') {BACKWARD();}
  else if(data =='L') {LEFT();}
  else if(data =='R') {RIGHT();}
  else if(data =='S') {STOP();}

  else if (data == '0') {SPEED = 0;}
  else if (data == '1') {SPEED = 20;}
  else if (data == '2') {SPEED = 50;}
  else if (data == '3') {SPEED = 80;}
  else if (data == '4') {SPEED = 120;}
  else if (data == '5') {SPEED = 180;}
  else if (data == '6') {SPEED = 200;}
  else if (data == '7') {SPEED = 210;}
  else if (data == '8') {SPEED = 220;}
  else if (data == '9') {SPEED = 230;}
  else if (data == 'q') {SPEED = 250;}
  
}

void FORWARD()
{ 
  //LEFT MOTOR
  analogWrite(EnA,SPEED); //PIN NO , RESOLUTION
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);

  ///RIGHT MOTOR 
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(EnB,SPEED);
}

void BACKWARD()
{
  analogWrite(EnA,SPEED); //PIN NO , RESOLUTION
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(EnB,SPEED);
}

void LEFT(){
  analogWrite(EnA,SPEED); //PIN NO , RESOLUTION
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(EnB,SPEED);
}

void RIGHT(){
   analogWrite(EnA,SPEED); //PIN NO , RESOLUTION
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(EnB,SPEED);
}
void STOP(){
  analogWrite(EnA,0); //PIN NO , RESOLUTION
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  analogWrite(EnB,0);
}

