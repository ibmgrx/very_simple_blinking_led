
static bool isLedOn = false;
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  digitalWrite(LED_BUILTIN, isLedOn);
  isLedOn = !isLedOn;
  delay(100);
}
