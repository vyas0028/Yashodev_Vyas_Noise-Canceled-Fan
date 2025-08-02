#include <Audio.h>          // 1. Bring in all class blueprints for audio blocks.
#include <Wire.h>           // 2. (Unused now—safe to keep)
#include <SPI.h>            // 3. (Unused in this basic test)

AudioInputI2S   mic;        // 4. Make a global object called `mic`
AudioFilterBiquad notch;    // 5. Another object called `notch`
AudioOutputI2S  amp;        // 6. Object called `amp`

AudioConnection patch1(mic,0,notch,0); // 7. Connect mic → notch
AudioConnection patch2(notch,0,amp,0); // 8. Connect notch → amp

const int FAN_PIN = 6;      // 9. Name pin 6 once and for all

void setup() {              // 10. Arduino calls this once after reset
  AudioMemory(12);          // 11. Reserve 12×128-sample buffers (≈3 kB)
  notch.setNotch(2000.0f,10.0f); // 12. Program the filter coefficients
  pinMode(FAN_PIN, OUTPUT); // 13. Set hardware pin direction
  analogWriteFrequency(FAN_PIN, 25000); // 14. Configure PWM clock
  analogWriteResolution(8); // 15. Use 8-bit duty (0–255)
}

void loop() {               // 16. Arduino calls this forever
  for(int d=0; d<=200; d+=40){   // 17. Count 0,40,80,120,160,200
    analogWrite(FAN_PIN, d);     // 18. Apply new PWM duty
    delay(600);                  // 19. Wait so you can hear the change
  }
  for(int d=200; d>=0; d-=40){   // 20. Back down
    analogWrite(FAN_PIN, d);
    delay(600);
  }
  delay(2000);                   // 21. Quiet window for FFT capture
}
