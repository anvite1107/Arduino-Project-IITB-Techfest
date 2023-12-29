void setup()
{
  pinMode(8,OUTPUT); // WHEEL 1
  pinMode(9,OUTPUT); // WHEEL 1
  pinMode(5,OUTPUT); // WHEEL 2
  pinMode(12,OUTPUT); // SENSOR 1 LEFT SIDE
  digitalWrite(12,HIGH);
  pinMode(6,OUTPUT); // WHEEL 2
  pinMode(2,OUTPUT); // SENSOR O/P LEFT
pinMode(4,INPUT); // SENSOR VCC LEFT
  digitalWrite(2,HIGH);
  pinMode(13,OUTPUT); // SENSOR OUTPUT RIGHT
  digitalWrite(13,HIGH);
  pinMode(10,INPUT); // SENSOR VCC RIGHT
}
// the loop function runs forever 
void loop()
{
  int a=digitalRead(4);
  int b= digitalRead(10);
  if(a==HIGH)
  {
 digitalWrite(8,HIGH);//clockwise(RED)
 digitalWrite(9,LOW);//BLACK
 delay(200);
 digitalWrite(5,LOW);//clockwise(RED)
 digitalWrite(6,HIGH);//BLACK
 delay(200);
  }
  if(b==HIGH)
  {
digitalWrite(5,LOW);//clockwise(RED)
 digitalWrite(6,HIGH);//BLACK
 delay(200);
  digitalWrite(8,HIGH);//clockwise(RED)
 digitalWrite(9,LOW);//BLACK
 delay(200);
  }
 

if(a==LOW)
{
digitalWrite(8,LOW);//clockwise(RED)
 digitalWrite(9,HIGH);//BLACK
delay(200);
digitalWrite(5,HIGH);//clockwise(RED)
 digitalWrite(6,LOW);//BLACK
delay(200);
}
if (b==LOW)
{
digitalWrite(5,HIGH);//clockwise(RED)
 digitalWrite(6,LOW);//BLACK
delay(200);

}
}
