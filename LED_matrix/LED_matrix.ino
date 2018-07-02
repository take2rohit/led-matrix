void led (int x,int y)
{
  digitalWrite(2+x,LOW);
  digitalWrite(8+y,HIGH);
}

void off()
{
  for (int i=2; i<=7; i++)
     digitalWrite(i,HIGH);
  for (int i=8; i<=13; i++)
     digitalWrite(i,LOW);
}

void setup() 
{
  for (int i=2; i<=13; i++)
     pinMode(i,OUTPUT);
  off();
}
int x=4;char time;
void loop() 
{
  time++;
  led(4-x,0);off(); //letter p starts
  led(4-x,1);off();
  led(4-x,2);off();
  led(4-x,3);off();
  led(4-x,4);off();
  led(3-x,4);off();
  led(2-x,4);off();
  led(1-x,4);off();
  led(3-x,2);off();
  led(1-x,3);off();
  led(1-x,2);off();
  led(2-x,2);off(); //letter p ends

  if (x==-4)
    x=4;
  if (time >1 && (time % 100==0))
    x--;
  
  
}
