void setup()
{ 
    Serial.begin(9600);
    pinMode(2, INPUT_PULLUP);
    int x;
   for (x=3; x<=13; x++) {
   pinMode(x, OUTPUT);}
   
    tone (8,200,500);
    delay(250);
    tone (8,400,100);   
}
int speed =100,n = 1 ;
void loop()
{  
  for (int x=3;x<=13;x++)
   {
        if (x==8)
        {
            digitalWrite(x,0);
             continue;
        }
        else{}
       digitalWrite(x,1);
        delay(speed);
         digitalWrite(x,0);
        if (digitalRead(2) == 0){
           n = n*2 ;
           speed = speed/2; 
           Serial.println("Faster X 2 (Current Speed : X" +String(n)+")");    
            tone (8,400,100);
            delay(500);
        }
   } 
    for (int x=13;x>=3;x--)
   {
        if (x==8)
        {
            digitalWrite(x,0);
            continue;
        }
        else{}
       digitalWrite(x,1);
        delay(speed);
         digitalWrite(x,0);       
         if (digitalRead(2) == 0){
           n = n*2 ; 
          speed = speed/2;
           Serial.println("Faster X 2 (Current Speed : X" +String(n)+")");  
            tone (8,400,100);
            delay(500);
        }
   } 
}