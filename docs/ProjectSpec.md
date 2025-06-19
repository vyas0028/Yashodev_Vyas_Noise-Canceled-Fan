**
LINKS
[README](../README.md)  
[Spec](ProjectSpec.md)  
[DevLog](DevLog.md)
**

## Welcome to the Noise Canceling Fan Project Specification! This is a a summary of project requirements and parameters. 



## 1. Project Overview
A desktop fan assembly that actively cancels its own noise by collecting noise signal using MEMS microphone, conducting FFT on a Teensy microcontroller, and then outputting an inverted signal through a speaker to cancel fan whine. 

---

## 2. Functional Requirements
- Detect principal fan noise frequencies in the 200–1000 Hz range
- Perform real-time FFT and generate inverted wave
- ≥ 6 dB SPL reduction at a distance of 0.5 m
- Maintain ≥ 50 CFM airflow from fan

---

## 3. Performance Targets

| Metric                    | Target Value     |
|---------------------------|------------------|
| SPL Reduction (at 0.5 m)  | ≥ 6 dB           |
| Fan Speed Range           | 200–1700 RPM     |
| FFT Latency               | ≤ 50 ms          |
| Speaker Output Power      | ≥ 1.5 W @ 4Ω     |
| Operation                 | Continuous       |
---

## 4. Mechanical Spec
- **Fan**: 140 mm ARCTIC P14 PWM, enclosed in horizontal cylindrical shell
- **Support**: Cylindrical post connecting fan shell to base
- **Base**: 120 × 120 × 30 mm rectangular platform with hollow interior
- **Mic**: Top surface of base, centered in front of fan
- **Speaker**: Front face of base in circular cutout
- **Feet**: 4 corner supports with rubber bottoms for grip

---

## 5. Deliverables
- CAD models of base, fan mount, speaker housing
- Functional prototype with real-time SPL reduction
- GitHub repo with Arduino firmware, code, and documentation
- Build documentation with photos, FEA snapshots, wiring diagram
- 90-second demo video showing functional behavior
- Final slide deck

---

_Last updated: 2025-06-18_

