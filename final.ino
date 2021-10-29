void setup() {

pinMode(5,OUTPUT);  //right motor
pinMode(6,OUTPUT);  //right motor
pinMode(9,OUTPUT);  //left motor
pinMode(10,OUTPUT);  //left motor
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
pinMode(A4,INPUT);
}

void loop() {

int sensorright1=analogRead(A0);
int sensorright2=analogRead(A1);
int sensormiddle=analogRead(A2);
int sensorleft2=analogRead(A3);
int sensorleft1=analogRead(A4);

if(sensorright1>400&&sensorright2>700&&sensormiddle<700&&sensorleft1>400&&sensorleft2>700) //forward
{
  analogWrite(5,255);
analogWrite(6,0);
analogWrite(9,255);
analogWrite(10,0);
}
if(sensorright1>400&&sensorright2>700&&sensormiddle>700&&sensorleft1>400&&sensorleft2>700) //360 turn                           
{
  analogWrite(5,140);
analogWrite(6,0);
analogWrite(9,0);
analogWrite(10,70);
}
if(sensorright1<400&&sensorright2>700&&sensormiddle>700&&sensorleft1>400&&sensorleft2>700) //right
{
analogWrite(5,0);
analogWrite(6,0);
analogWrite(9,140);
analogWrite(10,0);
}
if(sensorright1>400&&sensorright2<700&&sensormiddle>700&&sensorleft1>400&&sensorleft2>700) // right
{
  analogWrite(5,0);
analogWrite(6,0);
analogWrite(9,140);
analogWrite(10,0);
}
if(sensorright1>400&&sensorright2>700&&sensormiddle>700&&sensorleft1>400&&sensorleft2<700) //left
{
  analogWrite(5,140);
analogWrite(6,0);
analogWrite(9,0);
analogWrite(10,0);
}
if(sensorright1>400&&sensorright2>700&&sensormiddle>700&&sensorleft1<400&&sensorleft2>700) //left
{
  analogWrite(5,140);
analogWrite(6,0);
analogWrite(9,0);
analogWrite(10,0);
}
if(sensorright1<400&&sensorright2<700&&sensormiddle>700&&sensorleft1>400&&sensorleft2>700) //right
{
  analogWrite(5,0);
analogWrite(6,0);
analogWrite(9,140);
analogWrite(10,0);
}
if(sensorright1>400&&sensorright2<700&&sensormiddle<700&&sensorleft1>400&&sensorleft2>700) //right
{
  analogWrite(5,0);
analogWrite(6,0);
analogWrite(9,140);
analogWrite(10,0);
}
if(sensorright1>400&&sensorright2>700&&sensormiddle<700&&sensorleft1>400&&sensorleft2<700) //left
{
  analogWrite(5,140);
analogWrite(6,0);
analogWrite(9,0);
analogWrite(10,0);
}
if(sensorright1>400&&sensorright2>700&&sensormiddle>700&&sensorleft1<400&&sensorleft2<700) //left
{
  analogWrite(5,140);
analogWrite(6,0);
analogWrite(9,0);
analogWrite(10,0);
}
if(sensorright1<400&&sensorright2<700&&sensormiddle<700&&sensorleft1>400&&sensorleft2>700) //right
{
  analogWrite(5,0);
analogWrite(6,0);
analogWrite(9,140);
analogWrite(10,0);
}
if(sensorright1>400&&sensorright2>700&&sensormiddle<700&&sensorleft1<400&&sensorleft2<700) //left
{
  analogWrite(5,140);
analogWrite(6,0);
analogWrite(9,0);
analogWrite(10,0);
}
if(sensorright1<400&&sensorright2<700&&sensormiddle<700&&sensorleft1>400&&sensorleft2<700) //right
{
  analogWrite(5,0);
analogWrite(6,0);
analogWrite(9,140);
analogWrite(10,0);
}
if(sensorright1>400&&sensorright2<700&&sensormiddle<700&&sensorleft1<400&&sensorleft2<700) //left
{
  analogWrite(5,140);
analogWrite(6,0);
analogWrite(9,0);
analogWrite(10,0);
}
if(sensorright1<400&&sensorright2<700&&sensormiddle<700&&sensorleft1<400&&sensorleft2<700) //stop
{
  analogWrite(5,0);
analogWrite(6,0);
analogWrite(9,0);
analogWrite(10,0);
}
if(sensorright1<400&&sensorright2<700&&sensormiddle<700&&sensorleft1<400&&sensorleft2>700) //left
{
  analogWrite(5,140);
analogWrite(6,0);
analogWrite(9,0);
analogWrite(10,0);
}
if(sensorright1<400&&sensorright2<700&&sensormiddle>700&&sensorleft1<400&&sensorleft2<700) //left check agn
{
  analogWrite(5,140);
analogWrite(6,0);
analogWrite(9,0);
analogWrite(10,0);
}
if(sensorright1<400&&sensorright2>700&&sensormiddle<700&&sensorleft1<400&&sensorleft2<700) //right
{
  analogWrite(5,0);
analogWrite(6,0);
analogWrite(9,140);
analogWrite(10,0);
}
if(sensorright1<400&&sensorright2<700&&sensormiddle>700&&sensorleft1<400&&sensorleft2>700) //left
{
  analogWrite(5,140);
analogWrite(6,0);
analogWrite(9,0);
analogWrite(10,0);
}
if(sensorright1<400&&sensorright2>700&&sensormiddle>700&&sensorleft1<400&&sensorleft2<700) //right
{
  analogWrite(5,0);
analogWrite(6,0);
analogWrite(9,140);
analogWrite(10,0);
}
if(sensorright1<400&&sensorright2>700&&sensormiddle>700&&sensorleft1<400&&sensorleft2>700) //left check it agn
{
  analogWrite(5,140);
analogWrite(6,0);
analogWrite(9,0);
analogWrite(10,0);
}
}