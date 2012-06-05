/*
  This is a test for Git, how to manage all those things. 
  Quite complicated but will bite me through
 */

void setup() {
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(1, OUTPUT);
}

void loop() {
  digitalWrite(1, HIGH);   // set the LED on
  delay(1000);              // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  delay(1000);              // wait for a second
}