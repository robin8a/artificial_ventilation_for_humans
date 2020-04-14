//Contador de numero de pasos
int Distancia = 0; 

void setup() {               
  pinMode(8, OUTPUT);    
  pinMode(9, OUTPUT);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}

void loop() {
  // El motor da un paso
  digitalWrite(9, HIGH);
  delayMicroseconds(10);         
  digitalWrite(9, LOW);
  delayMicroseconds(10);
  Distancia = Distancia + 1;  
 
  // Comprobamos si el motor ha dado una vuelta completa (1600 pasos)
  if (Distancia == 1600)
  {
    // Si ha dado la vuelta cambiamos el sentido de rotacin
    if (digitalRead(8) == LOW)
    {
      digitalWrite(8, HIGH);
    }
    else
    {
      digitalWrite(8, LOW);
    }
    //reiniciamos el contador de pasos
    Distancia = 0;
   
    //esperamos un segundo
    delay(1000);
  }
}
