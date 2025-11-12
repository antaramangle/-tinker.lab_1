int l1 =13;

int l2 = 8;

int l3 = 2;

void setup() {

pinMode(11, OUTPUT);

pinMode(12, OUTPUT);

pinMode(13, OUTPUT);

}

void loop() {



digitalWrite(l1, HIGH);

delay(1000);

digitalWrite(l1, LOW);

delay(1000);

digitalWrite(l2, HIGH);

delay(1000);

digitalWrite(l2, HIGH);

delay(1000);

digitalWrite(l3, HIGH);

delay(1000);

digitalWrite(l3, LOW);

delay(1000);}