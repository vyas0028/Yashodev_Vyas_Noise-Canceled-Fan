
## Welcome to the Noise Canceling Fan Project Specification! This is a a summary of general project parameters. 



## Project Overview
A desktop fan assembly that actively cancels its own noise by collecting noise signal using MEMS microphone, conducting FFT on a Teensy microcontroller, and then outputting an inverted signal through a speaker to cancel fan whine. 

---

## Design Inputs
- Microphone must detect fan noise frequencies and communicate with Teensy. 
- Teensy must perform real-time FFT and generate inverted wave through speaker.
- The fan must fit snugly into a circular chamber.
- The base must allow for a breadboard/pcb to sit inside.
- There must be a way to prevent direct feedback from the speaker into the mic.


---

## 3. Performance Targets

| Metric                    | Target Value     |
|---------------------------|------------------|
| SPL Reduction (@ mic)     | ≥ 4 dB           |
| Fan Speed Range           | 200–1700 RPM     |
| FFT Latency               | ≤ 50 ms          |

---

## 4. Mechanical Spec
- **Fan**: 140 mm ARCTIC P14 PWM, enclosed in horizontal cylindrical shell
- **Support**: Cylindrical post connecting fan shell to base
- **Base**: 120 × 120 × 30 mm rectangular platform with hollow interior
- **Mic**: Top surface of base, centered in front of fan
- **Speaker**: Front face of base in circular cutout
- **Feet**: 4 corner supports with rubber bottoms for grip

---

