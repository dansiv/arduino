int ledPin1 = 10;
int ledPin2 = 11;

void setup() {
	pinMode(ledPin1, OUTPUT);
	pinMode(ledPin2, OUTPUT);
}

void loop() {
	digitalWrite(ledPin1, HIGH);
	digitalWrite(ledPin2, LOW);
	delay(300);
	digitalWrite(ledPin1, LOW);
	digitalWrite(ledPin2, HIGH);
	delay(300);	
}