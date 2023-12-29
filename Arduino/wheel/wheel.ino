void setup()
{
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}
// the loop function runs forever 
void loop()
{
 digitalWrite(8,HIGH);//clockwise(RED)
 digitalWrite(9,LOW);//BLACK
 delay(1000);
 digitalWrite(8,LOW);//anticlockwise(RED)
 digitalWrite(9,HIGH);//BLACK
 delay(1000);
  digitalWrite(5,HIGH);//clockwise(RED)
 digitalWrite(6,LOW);//BLACK
 delay(500);
 digitalWrite(5,LOW);//anticlockwise(RED)
 digitalWrite(6,HIGH);//BLACK
 delay(500);
}
