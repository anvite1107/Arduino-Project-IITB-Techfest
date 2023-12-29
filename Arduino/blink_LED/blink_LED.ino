void setup() 
{
  pinMode(13,OUTPUT);
}
// the loop function runs forever 
void loop()
{
 digitalWrite(13,HIGH); // turns the LED on (HIGH is the voltage level)
 delay(1000); // wait for a second
 digitalWrite(13,LOW); // turns the LED off by making voltage LOW
 delay(1000); // wait for a second
}
