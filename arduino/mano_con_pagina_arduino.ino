#include <Servo.h>
Servo servo_1;
Servo servo_2;
Servo servo_3;
Servo servo_4;
Servo servo_5; 
//Servo servo_6;
String inByte;
int pos;

void setup() {
  //el 11 no sirve 
 
  servo_1.attach(9); //meñique
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
    servo_1.write(pos-1000+15); //72

    else if (pos>=2000 && pos <3000)
    servo_2.write(pos-2000);//70

    else if (pos>=3000 && pos <4000)
    servo_3.write(pos-2000); //60

    else if (pos>=4000 && pos <5000)
    servo_4.write(pos-4000);//82

    else if (pos>=5000 && pos <6000)
    servo_5.write(pos-5000);//80


//cerrar puño
    else if(pos>=6000 && pos <7000)

      {
      servo_1.write(pos-6000+20);
      delay(300);
      servo_2.write(pos-6000+40);
    delay(300);
      servo_3.write(pos-6000+25);
    delay(300);
      servo_4.write(pos-6000+30);
    delay(300);
      servo_5.write(pos-6000+85);
    delay(300);

     //servo_6.write(pos-6000+0);
    //delay(500);
      }

//abrir
    else if(pos>=7000 && pos <8000)

      {
      servo_1.write(pos-6000+20);
      delay(300);
      servo_2.write(pos-6000+40);
    delay(300);
      servo_3.write(pos-6000+25);
    delay(300);
      servo_4.write(pos-6000+30);
    delay(300);
      servo_5.write(pos-6000+85);
    delay(300);

     //servo_6.write(pos-6000+0);
    //delay(500);
      }

      //cerrar
    else if(pos>=8000 && pos <9000)

      {
      servo_1.write(pos-6000+20);
      delay(300);
      servo_2.write(pos-6000+40);
    delay(300);
      servo_3.write(pos-6000+25);
    delay(300);
      servo_4.write(pos-6000+30);
    delay(300);
      servo_5.write(pos-6000+85);
    delay(300);

     //servo_6.write(pos-6000+0);
    //delay(500);
      }


      //abrir
    else if(pos>=7000 && pos <8000)

      {
      servo_1.write(pos-6000+20+50);
      delay(300);
      servo_2.write(pos-6000+40+50);
    delay(300);
      servo_3.write(pos-6000+25+50);
    delay(300);
      servo_4.write(pos-6000+30+50);
    delay(300);
      servo_5.write(pos-6000+85+50);
    delay(300);

     //servo_6.write(pos-6000+0);
    //delay(500);
      }

      //saludo
    else if(pos>=9000 && pos <10000)

      {
      servo_1.write(pos-6000+20);
      delay(300);
      servo_2.write(pos-6000+40);
    delay(300);
      servo_3.write(pos-6000+25+50);
    delay(300);
      servo_4.write(pos-6000+30);
    delay(300);
      servo_5.write(pos-6000+85);
    delay(300);

     //servo_6.write(pos-6000+0);
    //delay(500);
      }

    //chido
    else if(pos>=10000 && pos <11000)

      {
      servo_1.write(pos-6000+20);
      delay(300);
      servo_2.write(pos-6000+40);
    delay(300);
      servo_3.write(pos-6000+25);
    delay(300);
      servo_4.write(pos-6000+30);
    delay(300);
      servo_5.write(pos-6000+85+50);
    delay(300);

     //servo_6.write(pos-6000+0);
    //delay(500);
      }

    
    //myservo.write(pos);     // move servo
    //Serial.print("Servo in position: ");  
    //Serial.println(inByte);
    }
}
