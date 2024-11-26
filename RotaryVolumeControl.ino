#include <HID-Project.h>
 
 
int pinB = 3; // this one needs to be interruptable
int pinA = 4;
 
volatile int oldState = 0;
 
void setup() {
  pinMode (pinB, INPUT_PULLUP);
  pinMode (pinA, INPUT_PULLUP);
  Consumer.begin();
  attachInterrupt(digitalPinToInterrupt(pinB), intercount, CHANGE);
}
 
void loop() {
  // 
}
 
void intercount() {
  int sig1 = digitalRead(pinB); //if high
  int sig2 = digitalRead(pinA);
  int tmpState = sig1 + 2 * sig2;
  if(tmpState == 3 && oldState == 0) {
    
    Consumer.write(MEDIA_VOLUME_DOWN);
    
  }
  if(tmpState == 2 && oldState == 1) {
    
    Consumer.write(MEDIA_VOLUME_UP);
    
  }
  oldState = tmpState;
}
