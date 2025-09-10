/**********************************************************************
 *  Bench 1  –  Mic ↔ Speaker Smoke-Test + Tone Burst   (Teensy 4.1)
 *  Cycle: 0-4 s mic passthrough • 4-8 s 1 kHz sine • 8-10 s silence
 *         10-12 s fan PWM sweep on pin 6, then repeat
 *********************************************************************/
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>

/* ── Audio graph ────────────────────────────────────────────────── */
AudioInputI2S        mic;        // INMP441
AudioSynthWaveform   osc;        // 1 kHz sine
AudioMixer4          mix;        // ch0 = mic, ch1 = osc
AudioOutputI2S       spk;        // → MAX98357A DIN (pin 7)
AudioConnection      pc1(mic, 0, mix, 0);
AudioConnection      pc2(osc, 0, mix, 1);
AudioConnection      pc3(mix, 0, spk, 0);
AudioControlSGTL5000 dummy;      // required by Audio lib

/* ── Fan PWM ───────────────────────────────────────────────────── */
const uint8_t FAN_PIN = 6;
const uint16_t PWM_HZ = 25000;   // 25 kHz carrier

/* ── Timers ────────────────────────────────────────────────────── */
elapsedMillis tCycle, tPWM;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  /* audio */
  AudioMemory(12);
  osc.begin(0.5f, 1000.0f, WAVEFORM_SINE);  // gain, Hz, shape
  mix.gain(0, 1.0f);   // mic on
  mix.gain(1, 0.0f);   // osc muted
  for (int i = 2; i < 4; ++i) mix.gain(i, 0);

  /* fan PWM */
  analogWriteFrequency(FAN_PIN, PWM_HZ);
  analogWriteResolution(8);      // duty 0-255
  analogWrite(FAN_PIN, 0);

  Serial.begin(115200);
  Serial.println(F("Bench 1: compile-tested, ready to run."));
}

void loop() {
  /* 12-s state machine */
  if (tCycle < 4000) {                   // 0–4 s MIC
    mix.gain(0, 1.0f);  mix.gain(1, 0.0f);
  } else if (tCycle < 8000) {            // 4–8 s 1 kHz
    mix.gain(0, 0.0f);  mix.gain(1, 1.0f);
  } else if (tCycle < 10000) {           // 8–10 s silence
    mix.gain(0, 0.0f);  mix.gain(1, 0.0f);
  } else if (tCycle < 12000) {           // 10–12 s fan sweep
    if (tPWM >= 250) {                   // step every 0.25 s
      static int duty = 0;
      duty = (duty + 64) & 1000;          // 0→64→128→192→0
      analogWrite(FAN_PIN, duty);
      tPWM = 0;
    }
  } else {                               // restart cycle
    tCycle = 0;  tPWM = 0;  analogWrite(FAN_PIN, 0);
  }

  /* heartbeat LED: 0.5 s blink */
  digitalWriteFast(LED_BUILTIN, (tCycle / 500) & 1);
}
