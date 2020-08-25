const int trig1=9;
const int echo1=10;
const int trig2=11;
const int echo2=12;
const int trig3=2;
const int echo3=3;
  void setup() {
   Serial.begin(9600);
  pinMode(trig1,OUTPUT);
  pinMode(echo1,INPUT);
  pinMode(trig2,OUTPUT);
  pinMode(echo2,INPUT);
  pinMode(trig3,OUTPUT);
  pinMode(echo3,INPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(13,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);

}
void loop() 
{
digitalWrite(8,HIGH);
digitalWrite(13,HIGH);
digitalWrite(7,HIGH);
digitalWrite(trig1,HIGH);
delayMicroseconds(10);
digitalWrite(trig1,LOW);
delayMicroseconds(10);
long x=pulseIn(echo1,HIGH);
int d=x/29/2;
Serial.println(d);
digitalWrite(trig2,HIGH);
delayMicroseconds(10);
digitalWrite(trig2,LOW);
delayMicroseconds(10);
long y=pulseIn(echo2,HIGH);
int e=y/29/2;

digitalWrite(trig3,HIGH);
delayMicroseconds(10);
digitalWrite(trig3,LOW);
delayMicroseconds(10);
long z=pulseIn(echo3,HIGH);
int f=z/29/2;
if(d<=10)
{
  for(int i=0;i<3;i++)
{
  tone(6,5000,100);
}
}
if(e<=10)
{
  for(int i=0;i<3;i++)
{
  tone(6,2500,100);
}
}
if(f<=10)
{
  for(int i=0;i<3;i++)
{
  tone(6,1000,100);
}
}
if(d<=10 && e<=10)
{
  for(int i=0;i<3;i++)
{
  tone(6,1500,100);
}
}
if(f<=10 && e<=10)
{
  for(int i=0;i<3;i++)
{
  tone(6,500,100);
}
}
if(d<=10 && f<=10)
{
  for(int i=0;i<3;i++)
{
  tone(6,6000,100);
}
}
if(d<=10 && e<=10 && f<=10)
{
  for(int i=0;i<3;i++)
{
  tone(6,69,100);
}
}




}


