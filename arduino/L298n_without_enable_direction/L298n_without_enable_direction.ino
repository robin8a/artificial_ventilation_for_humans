//This code is to use with L298n Dual H-bridge motor driver<br>//It just turns on a DC motor for a certain time in a direction, turn it off, turn in the other direction and turn it off again
//refer to surtrtech.blogspot.com for more information
int in1 = 9; //Declaring the pins where in1 in2 from the driver are wired 
int in2 = 8; //here they are wired with D9 and D8 from Arduino
void setup() {
  pinMode(in1, OUTPUT); //Declaring the pin modes, obviously they're outputs
  pinMode(in2, OUTPUT);
}
//Before starting the loop you should create functions type "void" to control the driver's pins
//Here I created three functions, one to turn the motor in a direction "#1", the other one to the other direction "#3"
//and the second one to stop the motor
//For changing directions you switch the HIGH with LOW and vice-versa
void TurnMotorA(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}
void TurnOFFA(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}
void TurnMotorA2(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
}
void loop() {
  int i = 0;
  // Accelerate from zero to maximum speed
  for (int i = 0; i < 15; i++) {
    TurnMotorA(); // We turn to direction 1 for 3s then stop for 2s
    delay(10);
    TurnOFFA(); 
   }
   delay(2000);
   
  for (int i = 0; i < 15; i++) {
    TurnMotorA2(); // We turn to direction 2 for 3s then stop for 2s
    delay(10);
    TurnOFFA();
  }
  delay(2000);
}
