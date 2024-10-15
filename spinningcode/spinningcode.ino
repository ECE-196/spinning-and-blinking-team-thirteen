const unsigned int LED{17};
// add these
const unsigned int MTR_HI{13};
const unsigned int MTR_LO{14};

void setup() {
    pinMode(LED, OUTPUT);
    // and these
    pinMode(MTR_HI, OUTPUT);
    pinMode(MTR_LO, OUTPUT);

    // configure pins to spin the motor in a direction
   //  digitalWrite(MTR_HI, HIGH);
   //  digitalWrite(MTR_LO, LOW);
}
    void loop() {
      for (int i = 0; i <= 255; i+=5) {
          if (i % 25 == 0){
              digitalWrite(LED, HIGH); // turn the LED on
          }
          else{
               digitalWrite(LED, LOW); // turn the LED off
          }
        analogWrite(MTR_HI, i);
        analogWrite(MTR_LO, 0);
        delay(50);
      }
      for (int i = 0; i <= 255; i+=5) {
            if (i % 25 == 0){
             digitalWrite(LED, HIGH); // turn the LED on
          }
          else{
             digitalWrite(LED, LOW); // turn the LED off
          }
        analogWrite(MTR_HI, 0);
        analogWrite(MTR_LO, i);
        delay(50);
      }
    }
    
    