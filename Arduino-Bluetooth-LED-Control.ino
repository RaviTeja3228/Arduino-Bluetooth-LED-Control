#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11);

const int ledPin = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  BT.begin(9600);
}

void loop() {
  if (BT.available()) {
    char command = BT.read();

    if (command == '1') {
      digitalWrite(ledPin, HIGH);
      BT.println("LED ON");
    }
    else if (command == '0') {
      digitalWrite(ledPin, LOW);
      BT.println("LED OFF");
    }
  }
}