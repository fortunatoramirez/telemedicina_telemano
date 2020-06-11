int analogPinA0 = A0;
int val = 0;
int angulo;

void setup(){
  Serial.begin(9600);
}

void loop(){
  
  if(Serial.read() == 's'){
    val = analogRead(analogPinA0);
    if(val <= 205)
    {
      angulo = map(val,0,205,1015,1070);
      Serial.println(angulo); 
    }
    else if(val > 205 && val <= 409)
    {
      angulo = map(val,206,409,2000,2070);
      Serial.println(angulo);
    
    }
    else if(val > 409 && val <= 614)
    {
      angulo = map(val,410,614,3000,3060);
      Serial.println(angulo);
      
    }
    else if(val > 614 && val <= 818)
    {
      angulo = map(val,615,818,4000,4080);
      Serial.println(angulo);
      
    }
    else if(val > 818 && val <= 1023)
    {
      angulo = map(val,819,1023,5000,5080);
      Serial.println(angulo);
     
    }
    //angulo = map(val,0,1023,0,180);
    
    
  }

}
