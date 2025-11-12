
int led = 13;
int pushButton = 2;

void setup() {
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(pushButton);
  Serial.println(buttonState);

  if (buttonState == HIGH) {
    digitalWrite(led, HIGH); // Turn LED ON
    delay(500);              // Stay ON for half a second
    digitalWrite(led, LOW);  // Turn LED OFF
    delay(500);              // Stay OFF for half a second
  } else {
    digitalWrite(led, LOW);  // Keep LED OFF if button not pressed
  }
}