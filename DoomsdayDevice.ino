// Incoming audio signal.
int audio;

// Seconds since button was pressed.
int count = 0;

// Seconds to wait before triggering.
int triggerOn = 9;

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

  // Act when an audio signal is being received and count the seconds passing.
  if (audio < 10 || audio > 200) {
    count++;

    // When X number of seconds has passed, hit Enter and joystick button.
    if (count == triggerOn) {
      Joystick.button(1, 1);
      Keyboard.press(KEY_RETURN);

      delay(200);

      Joystick.button(1, 0);
      Keyboard.release(KEY_RETURN);

      count = 0;
    }
  }
  else if (count > 0) {
    // Reset the counter once there's no audio signal being received anymore.
    count = 0;
  }

  // Wait a second..
  delay(1000);
}
