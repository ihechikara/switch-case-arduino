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
  mappedPotValue = map(potValue, 0, 1023, 0, 5);

  switch (mappedPotValue) {
    case 0:
      digitalWrite(greenLED, LOW);
      digitalWrite(yellowLED, LOW);
      digitalWrite(redLED, LOW);
      Serial.println(mappedPotValue);
      break;
    case 1:
      digitalWrite(greenLED, HIGH);
      digitalWrite(yellowLED, LOW);
      digitalWrite(redLED, LOW);
      Serial.println(mappedPotValue);
      break;
    case 2:
      digitalWrite(greenLED, LOW);
      digitalWrite(yellowLED, HIGH);
      digitalWrite(redLED, LOW);
      Serial.println(mappedPotValue);
      break;
    case 3:
      digitalWrite(greenLED, LOW);
      digitalWrite(yellowLED, LOW);
      digitalWrite(redLED, HIGH);
      Serial.println(mappedPotValue);
      break;
    case 4:
      digitalWrite(greenLED, HIGH);
      digitalWrite(yellowLED, HIGH);
      digitalWrite(redLED, HIGH);
      Serial.println(mappedPotValue);
      delay(500);
      digitalWrite(greenLED, LOW);
      digitalWrite(yellowLED, LOW);
      digitalWrite(redLED, LOW);
      Serial.println(mappedPotValue);
      delay(500);
      break;
  }
  delay(100);
}
