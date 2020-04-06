/*********
 * Coding done by Idayu Sabri-MYBOTIC
 * Press Button 1, 2 and 3 to see rotation direction of the stepper motor
*********/

//Declare pin functions on Redboard
#define stp 2
#define dir 3
#define MS1 4
#define MS2 5
#define EN  6

//Declare variables for functions
char user_input;
int x;
int y;
int state;

void setup() {
  Serial.begin(9600); // Open the serial port at 9600 bps
  pinMode(stp, OUTPUT);
  pinMode(dir, OUTPUT);
  pinMode(MS1, OUTPUT);
  pinMode(MS2, OUTPUT);
  pinMode(EN, OUTPUT);
  pinMode (8, INPUT_PULLUP);
  pinMode (9, INPUT_PULLUP);
  pinMode (10, INPUT_PULLUP);
  resetEDPins(); //Set step, direction, microstep and enable pins to default states 
}

//Main loop
void loop() {
//  StepForwardDefault();
  ForwardBackwardStep();
//  ReverseStepDefault();

//  if(digitalRead (8) == LOW){
//    //Button one is pressed!
//    digitalWrite(EN, LOW); //Pull enable pin low to allow motor control
//    StepForwardDefault();
//  }
//  
//  else if (digitalRead (9) == LOW) {
//    //Button two is pressed!
//    digitalWrite(EN, LOW); //Pull enable pin low to allow motor control
//    ReverseStepDefault();
//  }
//  else if (digitalRead (10) == LOW) {
//    //Button three is pressed!
//    digitalWrite(EN, LOW); //Pull enable pin low to allow motor control
//    SmallStepMode();
//  }

  resetEDPins();

//delay(100);

}


//Reset Easy Driver pins to default states
void resetEDPins()
{
  digitalWrite(stp, LOW);
  digitalWrite(dir, LOW);
  digitalWrite(MS1, LOW);
  digitalWrite(MS2, LOW);
  digitalWrite(EN, HIGH);
}

//Default microstep mode function
void StepForwardDefault()
{
  digitalWrite(dir, LOW); //Pull direction pin low to move "forward"
  for(x= 1; x<1000; x++)  //Loop the forward stepping enough times for motion to be visible
  {
    digitalWrite(stp,HIGH); //Trigger one step forward
    delay(1);
    digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
    delay(1);
  }
  Serial.println("Enter new option");
  Serial.println();
}

//Reverse default microstep mode function
void ReverseStepDefault()
{
  Serial.println("Moving in reverse at default step mode.");
  digitalWrite(dir, HIGH); //Pull direction pin high to move in "reverse"
  for(x= 1; x<1000; x++)  //Loop the stepping enough times for motion to be visible
  {
    digitalWrite(stp,HIGH); //Trigger one step
    delay(1);
    digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
    delay(1);
  }
  Serial.println("Enter new option");
  Serial.println();
}

// 1/8th microstep foward mode function
void SmallStepMode()
{
  Serial.println("Stepping at 1/8th microstep mode.");
  digitalWrite(dir, LOW); //Pull direction pin low to move "forward"
  digitalWrite(MS1, HIGH); //Pull MS1, and MS2 high to set logic to 1/8th microstep resolution
  digitalWrite(MS2, HIGH);
  for(x= 1; x<1000; x++)  //Loop the forward stepping enough times for motion to be visible
  {
    digitalWrite(stp,HIGH); //Trigger one step forward
    delay(1);
    digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
    delay(1);
  }
  Serial.println("Enter new option");
  Serial.println();
}

//Forward/reverse stepping function
void ForwardBackwardStep()
{
  Serial.println("Alternate between stepping forward and reverse.");
  for(x= 1; x<5; x++)  //Loop the forward stepping enough times for motion to be visible
  {
    //Read direction pin state and change it
    state=digitalRead(dir);
    if(state == HIGH)
    {
      digitalWrite(dir, LOW);
    }
    else if(state ==LOW)
    {
      digitalWrite(dir,HIGH);
    }
    
    for(y=1; y<1000; y++)
    {
      digitalWrite(stp,HIGH); //Trigger one step
      delay(30);
      digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
      delay(30);
    }
  }
  Serial.println("Enter new option:");
  Serial.println();
}
