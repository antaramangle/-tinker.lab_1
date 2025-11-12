
int led = 13;
int pushbutton = 2;


void setup() {
  
  Serial.begin(9600);
  pinMode(pushbutton, INPUT);
  pinMode(led, OUTPUT);
  
}


void loop() {
  
  int buttonState = digitalRead(pushbutton);
  Serial.println(buttonState);
  if (buttonState == 1)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
  delay(1);
}