## Noise Canceling Fan Repository Guide

A desktop fan that actively reduces its own noise using real-time noise cancellation. This project combines mechanical design, FEA, embedded programming, signal processing, and acoustic analysis to showcase the engineering process.

---

## What It Does

This fan detects its own blade-generated noise using a microphone, identifies the dominant frequency using an FFT (Fast Fourier Transform), and cancels it in real time by outputting an inverted sound through a speaker.

---

## Skills Demonstrated

| Area             |   Tools / Topics 
| CAD Design       |   SolidWorks, sketching, extrude, shell, fillet 
| FEA Simulation   |   Static + modal analysis in SolidWorks Simulation 
| Embedded Systems |   Teensy 4.1 microcontroller, Arduino IDE 
| Signal Processing|   FFT, filtering, frequency-domain analysis 
| Electronics      |   MEMS mic, op-amp gain, speaker circuit 
| Python & Data    |   Jupyter notebooks, SPL plots, FFT visualization 
| Engineering Docs |   Specs, BOMs, risk matrices 
| GitHub           |   Structured repo, markdown docs, version control 

---

## Repository Overview

├─ CAD/             ← SolidWorks parts & assemblies
│   ├─Practice_CAD
│   ├─Project_CAD
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

## General Project Timeline 

| Week |   Deliverables 
| 1    |   Set up repo, write spec, BOM, practice CAD basics, and complete simple test parts. 
| 2    |   Begin design of base, lid, and vertical support tube. Finalize part interfaces.
| 3    |   Complete full SolidWorks model of base, lid, tube, fan shroud. Prepare all files for printing.
| 4    |   Run static + modal FEA on critical parts. Slice and print physical components.
| 5    |   Assemble printed parts, connect fan, mic, and speaker. Breadboard electronics.
| 6    |   Implement mic reading, FFT, and speaker playback on Teensy. Begin noise cancellation.
| 7    |   Measure SPL reduction, record demo video, polish documentation, and finalize README.
| 8    |   Structured repo, markdown docs, version control 


## CAD Models
| [Part](link)                                                      |   Description
| [Box](CAD/Project_CAD/box.SLDPRT)                                 |   Box that forms the base. Houses electronics. 
| [Lid](CAD/Project_CAD/lid.SLDPRT)                                 |   Lid that fits flush with top of base. Mounts to support tube with screws.
| [Support_Tube](CAD/Project_CAD/tube.SLDPRT)                       |   Vertical support tube that rises from lid to shroud. Houses wiring. 
| [Fan_Housing_Front_Plate](CAD/Project_CAD/Fan_Front_Plate.SLDPRT) |   Circular plate that sits in front of fan to create circular profile to fit into shroud. 
| [Fn_Housing_Back_Plate](CAD/Project_CAD/Fan_Back_Plate.SLDPRT)    |   Circular plate that sits in behind fan to create circular profile to fit into shroud. Screwed through fan holes to back plate.
| Fan_Shroud                                                        |   Horizontal cylinder that houses fan, microphone, and speaker. Connects to support tube at bottom.  
