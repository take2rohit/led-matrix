void LED (int x,int y)
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

void loop() 
{
  for (int i=0; i<5; i++)
    for (int j=0; j<5; j++)
    {
      LED(i,j);
      delay(500);
      off();
    }
}
