#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define trigPin 9
#define echoPin 10
#define redLED 6
#define greenLED 7

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  lcd.begin(16, 2);
  lcd.print("Parking Slot");
}

void loop() {
  long duration;
  int distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  distance = 20;   // VACANT test


  lcd.setCursor(0,1);

  if (distance < 10) {
    lcd.print("OCCUPIED      ");
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
  } else {
    lcd.print("VACANT        ");
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
  }

  delay(500);
}

