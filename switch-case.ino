int greenLED = 8;
int yellowLED = 9;
int redLED = 10;
int potPin = A0; 
int potValue;
int mappedPotValue;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  potValue = analogRead(potPin);
  mappedPotValue = map(potValue, 0, 1023, 0, 4);

  switch (mappedPotValue) {
    case 0:
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      Serial.println(mappedPotValue);
      break;
    case 1:
      digitalWrite(8, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      Serial.println(mappedPotValue);
      break;
    case 2:
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      Serial.println(mappedPotValue);
      break;
    case 3:
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      Serial.println(mappedPotValue);
      break;
    case 4:
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      Serial.println(mappedPotValue);
      delay(500);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      Serial.println(mappedPotValue);
      delay(500);
      break;
  }
  delay(100);
}
