// C++ code
//
const int led =10;
int brightness=0;
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  for (brightness=0;brightness<=255;brightness+=5){
    analogWrite(led,brightness);delay(100);
    }
    
  for ( brightness=255;brightness>=0;brightness-=5){
    analogWrite(led,brightness);delay(100);
   }
  

  
  
  
}