// IR SENSOR

void setup() {

  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(A0);
  if (val > 400)
  {

    digitalWrite(13, HIGH);
    Serial.println("Not enough light");
  }

  else

  { digitalWrite(13, LOW);
    Serial.println("Oh there is light");
  }

  delay(1000);

}
