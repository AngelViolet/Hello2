#include <stdio.h>  // printf scanf
#include <wiringPi.h>

int main()
{
    wiringPiSetup();
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(0, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
    pinMode(14, OUTPUT);
    pinMode(30, OUTPUT);
    pinMode(21, OUTPUT);
 
    digitalWrite(14, HIGH);            
    digitalWrite(30, HIGH);
    digitalWrite(21, LOW);
   
       
    while(1)
    {
		 digitalWrite(14, HIGH);            
         digitalWrite(30, HIGH);
         digitalWrite(21, LOW);
         
		digitalWrite(8, LOW);
		digitalWrite(9, HIGH);
		digitalWrite(7, HIGH);
		digitalWrite(0, HIGH);
		digitalWrite(2, HIGH);
		digitalWrite(3, HIGH);
		digitalWrite(12, HIGH);
		digitalWrite(13, HIGH);		
            
        delay(500);
        digitalWrite(9, LOW);
        digitalWrite(8, HIGH);        
        delay(500);
        digitalWrite(7, LOW);
        digitalWrite(9, HIGH);
        delay(500);
        digitalWrite(0, LOW);
        digitalWrite(7, HIGH);
        delay(500);
        digitalWrite(2, LOW);
        digitalWrite(0, HIGH);
        delay(500);
        digitalWrite(3, LOW);
        digitalWrite(2, HIGH);
        delay(500);
        digitalWrite(12, LOW);
        digitalWrite(3, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        delay(500);
        
        
        
          
        
         digitalWrite(14, HIGH);            
         digitalWrite(30, LOW);
         digitalWrite(21, HIGH);
         
		digitalWrite(8, LOW);
		digitalWrite(9, HIGH);
		digitalWrite(7, HIGH);
		digitalWrite(0, HIGH);
		digitalWrite(2, HIGH);
		digitalWrite(3, HIGH);
		digitalWrite(12, HIGH);
		digitalWrite(13, HIGH);		
            
        delay(500);
        digitalWrite(9, LOW);
        digitalWrite(8, HIGH);        
        delay(500);
        digitalWrite(7, LOW);
        digitalWrite(9, HIGH);
        delay(500);
        digitalWrite(0, LOW);
        digitalWrite(7, HIGH);
        delay(500);
        digitalWrite(2, LOW);
        digitalWrite(0, HIGH);
        delay(500);
        digitalWrite(3, LOW);
        digitalWrite(2, HIGH);
        delay(500);
        digitalWrite(12, LOW);
        digitalWrite(3, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        delay(500);   
        
        
        digitalWrite(14, LOW);            
         digitalWrite(30, HIGH);
         digitalWrite(21, HIGH);
         
		digitalWrite(8, LOW);
		digitalWrite(9, HIGH);
		digitalWrite(7, HIGH);
		digitalWrite(0, HIGH);
		digitalWrite(2, HIGH);
		digitalWrite(3, HIGH);
		digitalWrite(12, HIGH);
		digitalWrite(13, HIGH);		
            
        delay(500);
        digitalWrite(9, LOW);
        digitalWrite(8, HIGH);        
        delay(500);
        digitalWrite(7, LOW);
        digitalWrite(9, HIGH);
        delay(500);
        digitalWrite(0, LOW);
        digitalWrite(7, HIGH);
        delay(500);
        digitalWrite(2, LOW);
        digitalWrite(0, HIGH);
        delay(500);
        digitalWrite(3, LOW);
        digitalWrite(2, HIGH);
        delay(500);
        digitalWrite(12, LOW);
        digitalWrite(3, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        delay(500);     
     }
     return 0;
}
    
