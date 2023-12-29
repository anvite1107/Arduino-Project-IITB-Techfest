void setup() {
  // initialise serial
  Serial.begin(9600); // bot rate- speed at which data is sent, speed should be same at both ends
  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0) // if data is being recieved
  {
    char data = Serial.read();
     if (data == 'a')
     digitalWrite(13,HIGH); // if data is a, light starts
     if (data=='b')
     digitalWrite(13,LOW); // if data is b, light turns off 
  }

}
