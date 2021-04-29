int pin=6;
void setup() {
 Serial.begin(115200);
  Serial3.begin(115200);
  pinMode(pin,INPUT_PULLUP);

}

void loop() {
 int x = digitalRead(pin);  ///read means high 

  if(x==HIGH)
  {

    Serial.println("A");
    Serial3.print("A");
  }
  else{
   Serial.println("a");
    Serial3.print("a");
  }

}
