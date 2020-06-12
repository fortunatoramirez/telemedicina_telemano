#include <Servo.h>
Servo servo_1;
Servo servo_2;
Servo servo_3;
Servo servo_4;
Servo servo_5; 
String inByte;
int pos;

void setup() {
 
  servo_1.attach(9); //meNique
  servo_2.attach(10); //anular
  servo_3.attach(3); //medio
  servo_4.attach(5); //indice
  servo_5.attach(6); //pulgar
  
  Serial.begin(9600);
}

void loop()
{    
  if(Serial.available())  // if data available in serial port
    { 
    inByte = Serial.readStringUntil('\n'); // read data until newline
    pos = inByte.toInt();   // change datatype from string to integer        

    if(pos>=1000 && pos <2000)
    servo_1.write(pos-1000);

    else if (pos>=2000 && pos <3000)
    servo_2.write(pos-2000);

    else if (pos>=3000 && pos <4000)
    servo_3.write(pos-2000);

    else if (pos>=4000 && pos <5000)
    servo_4.write(pos-4000);

    else if (pos>=5000 && pos <6000)
    servo_5.write(pos-5000);

    else if(pos>=6000 && pos <7000)

      
      
      {
      servo_1.write(pos-6000+20);
      
      delay(500);
      
    
   
      servo_2.write(pos-6000+20);
    delay(500);
    
    
    
      servo_3.write(pos-6000+20);
    delay(500);
    
    
   
      servo_4.write(pos-6000+25);
    delay(500);
    
    

      servo_5.write(pos-6000+20);
    delay(500);
      }
      
    else if (pos==0)
   {
     
      servo_1.write(20);
      delay(4);
      servo_2.write(20);
    delay(4);
      servo_3.write(25);
    delay(4);
      servo_4.write(30);
    delay(4);
      servo_5.write(20);
    delay(4);

  
      
   }
   
   else if (pos==70)
   
   {
     
      servo_1.write(20+70);
      delay(4);
      servo_2.write(20+70);
    delay(4);
      servo_3.write(25+70);
    delay(4);
      servo_4.write(30+70);
    delay(4);
      servo_5.write(20+70);
    delay(4);

  
      
   }

    }
    //myservo.write(pos);     // move servo
    //Serial.print("Servo in position: ");  
    //Serial.println(inByte);
    
}
