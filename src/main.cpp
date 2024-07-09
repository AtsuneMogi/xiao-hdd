#include <Arduino.h>  // needed in PlatformIO


int pin1 = 8;


void freq(int pin, int f, int t) {
    tone(pin, f);
    delay(t - 40);
    noTone(pin);
    delay(40);
}


void music_main() {
    freq(pin1, 880, 250); // A5
    freq(pin1, 880, 500); // A5
    freq(pin1, 988, 250); // B5
    freq(pin1, 880, 250); // A5
    freq(pin1, 740, 250); // F#5
    freq(pin1, 880, 500); // A5
        
    freq(pin1, 880, 250); // A5
    freq(pin1, 880, 500); // A5
    freq(pin1, 988, 250); // B5
    freq(pin1, 880, 250); // A5
    freq(pin1, 740, 250); // F#5
    freq(pin1, 880, 500); // A5

    freq(pin1, 587, 250); // D5
    freq(pin1, 587, 250); // D5
    freq(pin1, 587, 250); // D5
    freq(pin1, 659, 250); // E5
    freq(pin1, 740, 750); // F#5
    freq(pin1, 587, 250); // D5

    freq(pin1, 740, 750); // F#5
    freq(pin1, 880, 250); // A5
    freq(pin1, 880, 1000); // A5
        
    freq(pin1, 587, 250); // D5
    freq(pin1, 587, 250); // D5
    freq(pin1, 587, 250); // D5
    freq(pin1, 659, 250); // E5
    freq(pin1, 740, 1000); // F#5

    freq(pin1, 587, 250); // D5
    freq(pin1, 587, 250); // D5
    freq(pin1, 587, 250); // D5
    freq(pin1, 659, 250); // E5
    freq(pin1, 740, 1000); //F#5
    
    freq(pin1, 659, 250); // E5
    freq(pin1, 659, 250); // E5
    freq(pin1, 659, 250); // E5
    freq(pin1, 587, 250); // D5
    freq(pin1, 659, 500); // E5
    freq(pin1, 740, 500); // F#5

    freq(pin1, 880, 500); // A5
    freq(pin1, 784, 500); // G5
    freq(pin1, 740, 500); // F#5
    freq(pin1, 659, 500); // E5
}


void setup() {
    
}


void loop() {
    music_main();
}
