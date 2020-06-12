int analogPinA0 = A0;
int val = 0;
int angulo;

void setup(){
  Serial.begin(9600);
}

void loop(){
  
  if(Serial.read() == 's'){
    val = analogRead(analogPinA0);
    //angulo = map(val,0,1023,0,180);
    if( val > 220)
    {
      Serial.println(0);
    }
    
    else
    {
      Serial.println(70);
    }
    
    
  }

}
