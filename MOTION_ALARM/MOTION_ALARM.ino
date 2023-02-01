const int LED_PIN = 2;
const int BUZZER_PIN = 3;
const int PIR_PIN = 4;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(PIR_PIN, INPUT);
}

void loop() {
  if (digitalRead(PIR_PIN) == HIGH)
    trigger();
}

void trigger() {
  digitalWrite(LED_PIN, HIGH);
  digitalWrite(BUZZER_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);
  delay(500);
}
