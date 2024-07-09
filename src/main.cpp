#include <Arduino.h>  // needed in PlatformIO


int pin1 = 8;
void freq(int pin, int f, int t) {
    tone(pin, f);
    delay(t - 40);
    noTone(pin);
    delay(40);
}


void music_main() {
    freq(pin1, 880, 250); // la
    freq(pin1, 880, 500); // la
    freq(pin1, 988, 250);
    freq(pin1, 880, 250);
    freq(pin1, 740, 250);
    freq(pin1, 880, 500);
        
    freq(pin1, 880, 250); // la
    freq(pin1, 880, 500); // la
    freq(pin1, 988, 250);
    freq(pin1, 880, 250);
    freq(pin1, 740, 250);
    freq(pin1, 880, 500);

    freq(pin1, 587, 250);
    freq(pin1, 587, 250);
    freq(pin1, 587, 250);
    freq(pin1, 659, 250);
    freq(pin1, 740, 750);
    freq(pin1, 587, 250);

    freq(pin1, 740, 750);
    freq(pin1, 880, 250);
    freq(pin1, 880, 1000);
        
    freq(pin1, 587, 250);
    freq(pin1, 587, 250);
    freq(pin1, 587, 250);
    freq(pin1, 659, 250);
    freq(pin1, 740, 1000);

    freq(pin1, 587, 250);
    freq(pin1, 587, 250);
    freq(pin1, 587, 250);
    freq(pin1, 659, 250);
    freq(pin1, 740, 1000);
    
    freq(pin1, 659, 250);
    freq(pin1, 659, 250);
    freq(pin1, 659, 250);
    freq(pin1, 587, 250);
    freq(pin1, 659, 500);
    freq(pin1, 740, 500);

    freq(pin1, 880, 500);
    freq(pin1, 784, 500);
    freq(pin1, 740, 500);
    freq(pin1, 659, 500);
}


void setup() {
    
}


void loop() {
    music_main();
}
