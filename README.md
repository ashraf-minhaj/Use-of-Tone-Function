# Use-of-Tone-Function

int buzzzer=7; //declare pin number of buzzeer
void setup()
{
 pinMode(buzzer,OUTPUT);
 }
 void loop()
 {
  tone(buzzer,1000,100); //tone(pin-number,freq,delay)
  delay(1000);
  }
