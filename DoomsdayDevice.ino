// Incoming audio signal.
int audio;
int count = 0;
int trigger = 8;

void setup() {
  Keyboard.begin();
}

void loop() {
  // Read the incoming audio signal and convert it from 10-bit to 8-bit.
  audio = analogRead(A0);
  audio = (audio + 1) / 4 - 1;
  if (audio < 0) {
    audio = 0;
  }

  if (value < 100 || value > 1000 || count > 5) {
    if (count == trigger) {
    // When X number of seconds has passed, hit Enter and joystick button.
      Joystick.button(1, 1);
      Keyboard.press(KEY_RETURN);

      delay(200);

      Joystick.button(1, 0);
      Keyboard.release(KEY_RETURN);

      count = 0;
    }
    else {
      count++;
    }
  }
  else if (count > 0) {
    count = 0;
  }

  delay(1000);
}
