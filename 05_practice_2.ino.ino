#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle);
}

void loop() {
  Serial.println(++count);
  digitalWrite(PIN_LED, 0);
  delay(1000);

  for (int i=0; i<5; i++) {
    toggle = toggle_state(toggle);
    digitalWrite(PIN_LED,toggle);
    delay(200);
    toggle = toggle_state(toggle);
    digitalWrite(PIN_LED,toggle);
    delay(200);
  }
while (1) {
  digitalWrite(PIN_LED, 1);

}
}

int toggle_state(int toggle) {
  return !toggle;
}