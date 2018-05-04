  # Use-of-Tone-Function. watch https://www.youtube.com/edit?o=U&video_id=Bz_tgR7atys
    
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
