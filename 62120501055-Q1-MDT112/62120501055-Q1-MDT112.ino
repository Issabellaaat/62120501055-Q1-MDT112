void setup()
{
    tone (8,200,500);
    delay(250);
    tone (8,400,100);

   Serial.begin(9600);
    pinMode(2, INPUT_PULLUP);
    pinMode(2, OUTPUT); 
    pinMode(3, OUTPUT); 
    pinMode(4, OUTPUT); 
    pinMode(5, OUTPUT); 
    pinMode(6, OUTPUT); 
    pinMode(7, OUTPUT); 
    pinMode(9, OUTPUT); 
    pinMode(10, OUTPUT); 
    pinMode(11, OUTPUT); 
    pinMode(12, OUTPUT); 
    pinMode(13, OUTPUT); 

}
void loop()
{
    
    //int speed=100;
    int x= 0;
  for (int x=0;x<=13;x++)
   {
       digitalWrite(x,1);
        delay(100);
         digitalWrite(x,0);
   } 
   int y = 13;
    for (int y=0;y>=3;y--)
   {
       digitalWrite(y,1);
        delay(100);
         digitalWrite(y,0);
   } 
    /* digitalWrite(13,1);
    delay(speed);
    digitalWrite(13,0);

    digitalWrite(12,1);
    delay(speed);
    digitalWrite(12,0);

    digitalWrite(11,1);
    delay(speed);
    digitalWrite(11,0);

    digitalWrite(10,1);
    delay(speed);
    digitalWrite(10,0);

    digitalWrite(9,1);
    delay(speed);
    digitalWrite(9,0);

    digitalWrite(7,1);
    delay(speed);
    digitalWrite(7,0);

    digitalWrite(6,1);
    delay(speed);
    digitalWrite(6,0);

    digitalWrite(5,1);
    delay(speed);
    digitalWrite(5,0);

    digitalWrite(4,1);
    delay(speed);
    digitalWrite(4,0);

    digitalWrite(3,1);
    delay(speed);
    digitalWrite(3,0);

    digitalWrite(2,1);
    delay(speed);
    digitalWrite(2,0);  */ 
   

  if (digitalRead(2) == 0) 
    {
     Serial.println("Faster X 2 (Current Speed : X2)");
      digitalWrite(13,1);
       delay(50);}
    int light = 0,n=0,faster = n*2;
    if (light == 0)
    {
        Serial.println("Faster X 2 (Current Speed : X2)");
    digitalWrite(light,1);
    delay(faster);
    digitalWrite(light,0);
    }

    int p=0; 
 if (digitalRead(2) == 0) {
      p++;
      Serial.println(p);}



     
    if (digitalRead(2) == 0){
        
        int x= 0;
        for (int x=0;x<=13;x++)
             {
       digitalWrite(x,1);
        delay(speed*2);
         digitalWrite(x,0);
            } 
        Serial.println("Faster X 2 (Current Speed : X2)");    

        tone (8,200,500);
    }

}