const byte startPin = 8;
const byte endPin = 12;
byte lightPin = startPin;


void setup() {
  for (byte pin = startPin; pin <= endPin; pin++) {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
  }
}

void loop() {
  byte lightPinx = lightPin - 7;
  for (byte a = 1; a <= lightPinx; a++) {
    digitalWrite(lightPin, HIGH);
    delay(100);
    digitalWrite(lightPin, LOW);
    delay(100);
  }

  if (lightPin < endPin)
  {
    lightPin++;
  } else {
    lightPin = startPin;
  }

}
