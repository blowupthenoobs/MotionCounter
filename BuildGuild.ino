int PIRsense = A0;
int LEDpin5 = 2;
int LEDpin4 = 3;
int LEDpin3 = 4;
int LEDpin2 = 5;
int LEDpin1 = 6;

int counter = 0;

float duration, distance;

void setup() {
  pinMode(PIRsense, INPUT);
  pinMode(LEDpin1, OUTPUT);
  pinMode(LEDpin2, OUTPUT);
  pinMode(LEDpin3, OUTPUT);
  pinMode(LEDpin4, OUTPUT);
  pinMode(LEDpin5, OUTPUT);
  Serial.begin(9600);

}

void Count()
{
  counter++;
  counter %= 32;

  digitalWrite(LEDpin1, counter % 2);
  digitalWrite(LEDpin2, (counter % 4) > 1);
  digitalWrite(LEDpin3, (counter % 8) > 3);
  digitalWrite(LEDpin4, (counter % 16) > 7);
  digitalWrite(LEDpin5, (counter % 32) > 15);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println(digitalRead(PIRsense));

  if(digitalRead(PIRsense) == 1)
  {
    Count();
    while(digitalRead(PIRsense) == 1)
    {
      delay(1);
    }
  }
  // digitalWrite(LEDpin1, digitalRead(PIRsense));
  // digitalWrite(LEDpin2, digitalRead(PIRsense));
  // digitalWrite(LEDpin3, digitalRead(PIRsense));
  // digitalWrite(LEDpin4, digitalRead(PIRsense));
  // digitalWrite(LEDpin5, digitalRead(PIRsense));
  // digitalWrite(LEDpin, HIGH);
  // Serial.println(digitalRead(LEDpin));
}
