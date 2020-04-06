//delay equivalent in Hz
//   200 ms = 2 Hz        10 ms  = 50 Hz
//   100 ms = 5 Hz        5 ms   = 100 Hz
//   50 ms  = 10 Hz       2 ms   = 248 Hz
//   25 ms  = 20 Hz       1 ms   = 494 Hz
//   20 ms  = 25 Hz       490 us = 999 Hz


int dirpin = 8;
int steppin = 9;
int timer_ms;
int timer_us;

void setup() {
  pinMode(dirpin, OUTPUT);
  pinMode(steppin, OUTPUT);
}

void loop() {
  int i = 0;
  digitalWrite(dirpin, LOW);
  delay(100);

  for(i=0; i<1000; i++) {
    digitalWrite(steppin, LOW);
    digitalWrite(steppin, HIGH);
    delayMicroseconds(500);
  }

  digitalWrite(dirpin, HIGH);
  delay(100);

  for(i=0; i<1000; i++) {
    digitalWrite(steppin, LOW);
    digitalWrite(steppin, HIGH);
    delayMicroseconds(500);
  }
}
