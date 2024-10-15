const unsigned int LED{17};
// add these
const unsigned int MTR_HI{?};
const unsigned int MTR_LO{?};

void setup() {
    pinMode(LED, OUTPUT);
    // and these
    pinMode(MTR_HI, OUTPUT);
    pinMode(MTR_LO, OUTPUT);

    // configure pins to spin the motor in a direction
    digitalWrite(MTR_HI, HIGH);
    digitalWrite(MTR_LO, LOW);
}
    void loop() {
      for (int i = 0; i <= 255; i++) {
        analogWrite(MTR_HI, 255-i);
        analogWrite(MTR_LO, i)
        delay(.1);
      }
      /*for (int i = 0; i <= 255; i++) {
        analogWrite(MTR_HI, i);
        analogWrite(MTR_LO, 255-i)
        delay(.1);
      }*/
    }