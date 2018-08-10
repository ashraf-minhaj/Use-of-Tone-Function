int buzzer=7;
void setup()
{
pinMode(buzzer,OUTPUT);
}
void loop()
{
tone(buzzer,1000,100);
delay(100);
}
