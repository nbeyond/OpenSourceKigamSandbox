int button=10;

void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
	if (digitalRead(button) == LOW)
	{
		digitalWrite(5,HIGH);
	}
	else
	{
		digitalWrite(5,LOW);
	}
}
