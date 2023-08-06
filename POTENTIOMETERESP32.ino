// Sets the potentiometer pin to D4
const int POTPIN = 4;

// variable for storing the potentiometer value
int POTVALUE = 0;

void setup() {
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  // Reading potentiometer value
  POTVALUE = analogRead(POTPIN); // Sets the potentiometer value as reading the value of the potentiometer pin
  Serial.println(POTVALUE); // Prints the potentiometer value
  delay(100); // Creates a delay of 100 milliseconds between when it prints each value
}
