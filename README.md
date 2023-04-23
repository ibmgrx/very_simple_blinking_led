# very_simple_blinking_led
This is a simple Arduino code that blinks the built-in LED on the board without "if" statement.
## Explanation
* static bool isLedOn = false; declares a static boolean variable isLedOn and initializes it to false.
* pinMode(LED_BUILTIN, OUTPUT); sets the built-in LED pin as an output pin.
* digitalWrite(LED_BUILTIN, isLedOn); sets the LED pin to HIGH or LOW depending on the value of isLedOn.
* isLedOn = !isLedOn; inverts the value of isLedOn each time the loop() function runs, so the LED alternates between HIGH and LOW.
* delay(100); waits for 100 milliseconds before running the loop again.
