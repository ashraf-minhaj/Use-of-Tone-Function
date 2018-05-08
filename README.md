  # Use-of-Tone-Function.
  tutorial https://www.instructables.com/id/Ardino-Talk-1-Use-of-Tone-Function-Make-Your-Proje/
  watch https://www.youtube.com/watch?v=Bz_tgR7atys&t=14s
    
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
