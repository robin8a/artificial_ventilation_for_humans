//delay equivalent in Hz
//   200 ms = 2 Hz        10 ms  = 50 Hz
//   100 ms = 5 Hz        5 ms   = 100 Hz
//   50 ms  = 10 Hz       2 ms   = 248 Hz
//   25 ms  = 20 Hz       1 ms   = 494 Hz
//   20 ms  = 25 Hz       490 us = 999 Hz


int PulseA = 8;
int PulseB = 9;
int timer_ms;
int timer_us;

void setup() {
  pinMode(PulseA, OUTPUT);
  pinMode(PulseB, OUTPUT);
}

void loop() {
  int state = 0;

  while(1) {
//    timer_ms = 16383;
//    timer_ms = 32766;
//    timer_ms= 65532;
//    timer_ms= 8191,5;
    timer_ms= 5000;
    if(state == 0) {
      digitalWrite(PulseA, LOW);
      digitalWrite(PulseB, HIGH);
      state = 1;
    }
    else {
      digitalWrite(PulseA, HIGH);
      digitalWrite(PulseB, LOW);     
      state = 0;
    }
    delayMicroseconds(timer_ms);
  }
}
