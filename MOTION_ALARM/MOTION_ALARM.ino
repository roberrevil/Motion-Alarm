const int BUZZER_PIN = 2;
const int LED_PIN = 3;
const int PIR_PIN = 4;

void setup()
{
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(PIR_PIN, INPUT);

  warmup();
}

void loop()
{
  int motion = digitalRead(PIR_PIN);
  
  if (motion == HIGH)
    alarm();
  else {
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(LED_PIN, LOW);
  }
}

void warmup()
{
  for (int i = 0; i < 60; i++) {
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);
  }
}

void alarm() {
  digitalWrite(BUZZER_PIN, HIGH);
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
