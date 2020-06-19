// reads analog input from the five inputs from your arduino board
// and sends it out via serial

// variables for input pins and
int analogInput = A0;

// variable to store the value
int value = 0;
int contador = 0;
int altos = 0;
int bajos = 0;
int estado = 70;
unsigned long suma = 0;
unsigned long prom;

void setup()
{
  pinMode(analogInput, INPUT);


  // begin sending over serial port
  Serial.begin(9600);
}

void loop()
{
  // read the value on analog input
  delay(10);
  value = analogRead(analogInput);


  // print out value over the serial port





  // wait for a bit to not overload the port


  contador++;
  suma = suma + value;

  if (contador == 50)
  {
    prom = suma / 50;
    if (prom > 120)
    {
      altos++;
    }
  else if (prom < 120)
    {
      bajos++;
    }

    contador = 0;
    suma = 0;
  }

  if (altos == 3)
  {
    estado = 0;
    altos = 0;
  }
  else if (bajos ==3)
  {
    estado = 70;
    bajos = 0;
  }
   if(Serial.read() == 's')
   {
   Serial.println(estado);
   }

}
