int switchState = 0;
void setup(){
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(2,INPUT);
}

void loop() {
switchState = digitalRead(2);
// if button is not pressed
if (switchState == LOW) {
  digitalWrite(3, HIGH); //GreenLED
  digitalWrite(4, LOW); //RedLED
  digitalWrite(5, LOW); //RedLEDs
  }
  else { // the button is pressed
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);

// Wait for a quarter second 
// Toggle the LEDs
  delay(250);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(250);
//Wait for quarter of a second
  }
 } // Go back to beginning of the loop
 
