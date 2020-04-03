//Contador de numero de pasos
int distance = 0; 
int motorPin = 9;
int motorDirection = 8;
int steps = 50;
int motorSpeed = 900;

void setup() {
  Serial.begin(9600); // Open the serial port at 9600 bpd               
  pinMode(motorDirection, OUTPUT); // Set pin 9 (motorPin) as an Output
  pinMode(motorPin, OUTPUT); // Set pin 9 (motorPin) as an Output
//  digitalWrite(motorDirection, LOW);
//  digitalWrite(motorPin, LOW);
}

void loop() {
  // El motor da un paso
  digitalWrite(motorPin, HIGH);
  delayMicroseconds(500);         
  digitalWrite(motorPin, LOW);
  delayMicroseconds(1000);
  
//  digitalWrite(motorPin, HIGH);
//  delay(1000);
//  digitalWrite(motorPin, LOW);
//  delay(1000);
//  delay(motorSpeed);         
//  digitalWrite(motorPin, LOW);
//  delay(motorSpeed);

  distance = distance + 1;  
  Serial.println(distance);
  
  if (distance == steps) // Check if the motor reach n steps
  {
    Serial.println("Distance reach");

//    // Si ha dado la vuelta cambiamos el sentido de rotacin
//    if (digitalRead(motorDirection) == LOW) {
//      digitalWrite(motorDirection, HIGH);
//      Serial.println("Motor direction LOW");
//    } else {
//      digitalWrite(motorDirection, LOW);
//      Serial.println("Motor direction HIGH");
//    }
    
    //reiniciamos el contador de pasos
    distance = 0;
   
    //esperamos un segundo
    //delay(1000);
  }
}
