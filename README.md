## Noise Canceling Fan Repository Guide

A desktop fan that actively reduces its own noise using real-time noise cancellation. This project combines mechanical design, FEA, embedded programming, signal processing, and acoustic analysis to showcase the engineering process.

---

## What It Does

This fan detects its own blade-generated noise using a microphone, identifies the dominant frequency using an FFT (Fast Fourier Transform), and cancels it in real time by outputting an inverted sound through a speaker.

---

## Skills Demonstrated

| Area | Tools / Topics |
| CAD Design | SolidWorks, sketching, extrude, shell, fillet |
| FEA Simulation | Static + modal analysis in SolidWorks Simulation |
| Embedded Systems | Teensy 4.1 microcontroller, Arduino IDE |
| Signal Processing | FFT, filtering, frequency-domain analysis |
| Electronics | MEMS mic, op-amp gain, speaker circuit |
| Python & Data | Jupyter notebooks, SPL plots, FFT visualization |
| Engineering Docs | Specs, BOMs, risk matrices |
| GitHub | Structured repo, markdown docs, version control |

---

## Repository Overview


```text
├─ CAD/             ← SolidWorks parts & assemblies
│   ├─Practice_CAD
│   ├─ Project_CAD
│   └─ 
├─ docs/                ← specs, FEA results, BOM
│   ├─ DevLog.md
│   ├─ ProjectSpec.md
├─ firmware/            ← Teensy Arduino sketches
│   └─
├─ python/              ← Data analysis notebooks
│   └─ 
├─ media/               ← Demo images, videos
│   ├─ 
└─ README.md

