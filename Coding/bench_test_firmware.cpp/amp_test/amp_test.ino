/*
 * Tone-only test — proves amp + speaker wiring
 * No mic required
 */

#include <Audio.h>
#include <Wire.h>
#include <SPI.h>

AudioSynthWaveform   toneGen;  // generates a sine
AudioOutputI2S       amp;      // outputs to MAX98357A
AudioConnection      patch(toneGen, 0, amp, 0);

void setup() {
  AudioMemory(4);
  toneGen.begin(.5, 172, WAVEFORM_SINE); // 50 % volume, 440 Hz
}

void loop() {
  // nothing — tone plays forever
}
