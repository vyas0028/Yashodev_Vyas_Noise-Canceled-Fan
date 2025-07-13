
# Noise-Canceling Fan DevLog

Welcome to the Noise-Canceling Fan DevLog! This is a running summary of daily work on this project.

---

**LINKS**  
[README](../README.md)  
[Spec](Spec.md)  

---

## 06-16-2025 (Mon)

**Done**  
- Created Repo and README  
- Brainstormed high-level design: 3D printed hollow rectangular base with four supports, speaker on the front face, microphone hole on the top face, fan housed in horizontal cylinder supported by cylindrical column from base. Electrical housed under the base.

**Learned**  
- GitHub repo organizations for engineering projects.

**Next**  
- Order parts (mic, speaker, Teensy, etc), CAD practice, write project specifications.

---

## 06-17-2025 (Tues)

**Done**  
- Ordered parts (microcontroller, fan, electronics)

**Learned**  
- Electronics required (amplifier module, barrel jack adapter, etc)

**Next**  
- Write spec, BOM, CAD practice

---

## 06-19-2025 (Thur)

**Done**  
- Got hung up on internship work. Watched one SolidWorks recap video.

**Next**  
- CAD practice, first models.

---

## 06-20-2025 (Fri)

**Done**  
- Completed SolidWorks recap video

**Learned**  
- Reviewed SolidWorks basics (sketching, boss/revolve, shell, fillet)

**Next**  
- Begin practice parts

---

## 06-22-2025 (Sun)

**Done**  
- Created horizontal “lampshade” example from SolidWorks part modeling tutorial utilizing sketch, extrude, extrude-cut, shell, and fillet.  
  - [Practice_Lampshade.SLDPRT](../CAD/Practice_CAD/Practice_Lampshade.SLDPRT)
  - ![Lampshade screenshot](https://github.com/vyas0028/Yashodev_Vyas_Noise-Canceled-Fan/blob/32ec78ca6e4a8abb1198d366776dd70d3a60683d/Media/Practice_Lampshade.png) 
- Created circular baseplate to practice HoleWizard
  - [Practice_Plate.SLDPRT](../CAD/Practice_CAD/Practice_Plate.SLDPRT)

**Learned**  
- More thorough review of SolidWorks basics and learned about HoleWizard.

**Next**  
- Continue practice parts

---

## 06-23-2025 (Mon)

**Done**  
- Revisited design. Original model with speaker on front of base was deemed nonfunctional. Learned that noise canceling needs good alignment of fan noise to noise canceling signal from speaker. Redesigned to include speaker pointing directly into cylindrical fan shroud. Brainstormed horizontal plate that separates direct line of sight from speaker to mic inside shroud chamber.

**Learned**  
- Design requires **iteration**—every single idea/design will have issues that come up and need to be addressed.

**Next**  
- Begin CAD for base, support tube, and shroud

---

## 06-24-2025 (Tues)

**Done**  
- Began base: 160 × 160 × 25 mm with a 5.5 mm thick lip running along the inner face of box for lid to sit flush.

**Learned**  
- Offset function in SolidWorks. How to insert planes.

**Next**  
- Continue CAD for base, begin support tube, cylindrical shroud, round sleeve for fan.

---

## 06-27-2025 (Fri)

**Done**  
- Completed design for base. Learned how to insert plane at specific height.

**Learned**  
- Design requires **iteration**—every single idea/design will have issues that come up and need to be addressed.

**Next**  
- Begin CAD for lid, support tube, and shroud

---

## 06-30-2025 (Mon)

**Done**  
- Completed design for lid (157.5 × 157.5 × 6.5 mm). Thickness allows flange from tube to sit into lid.  
- Completed design for support tube: 70 × 70 mm cylinder with 3 mm wall thickness. Added 82 mm diameter, 2.5 mm thick flange around bottom of tube. Added 82 mm diameter, 2.5 mm deep recess into lid to allow tube to fit. Added four M4 tapped holes on a 76 mm diameter circle to flange, and clearance holes for brass inserts.  

**Learned**  
- Refreshed skills with basic extrude. Began GD&T, designing one part to fit into another.  
- Refreshed skills with HoleWizard. Learned screw size selection and technique for press fitting brass inserts.

**Next**  
- Begin CAD for fan housing plates and shroud

---

## 07-01-2025 (Tues)

**Done**  
- Created circular plates for front and back of fan to fit into cylindrical shroud.   
  - OD: 208 mm, thickness: 4 mm.  
  - Hole pattern: 4 × 4.45 mm holes on 124 × 124 mm square. Front plate counterbored (Ø 8 mm) for flush screws. Back plate holes Ø 5.7 mm × 3.5 mm deep with 0.5 mm skin for brass inserts.  
  - Central cutout: Ø 140 mm, filleted inner edges, chamfered outer edges (0.5 mm × 45°).

**Learned**  
- How to apply real-world dimensions (fan specs) to a CAD problem.

**Next**  
- Begin CAD for shroud

---

## 07-02-2025 (Wed)

**Done**  
- Revisited box design: inner lip was only 3.5 mm, not 6.5 mm. Revised box depth to 35 mm. Fixed wall thickness (3 mm intended). Revised lid to 153.5 × 153.5 mm.  
- Added 0.5 mm skin stopper to lid holes. Added 0.2 mm × 60° chamfer for inserts.  
- Began shroud development: finalized component dimensions within shroud (baffle, speaker, mic, plates, stopper ring). Shroud thickness: 3 mm.

**Learned**  
- Revisiting previously completed parts is important—design and dimensions may change based on interactions.

**Next**  
- Continue shroud development and figure out mate with vertical tube.

---

## 07-05-2025 (Fri)

**Done**  
- Cleaned up project documentation. Filled in missing entries.

**Learned**  

**Next**  
- Continue shroud development and figure out mate with vertical tube.

---

## 07-08-2025 (Tue)

**Done**  
- Further developed shroud design. Drafted speaker hole on top of shroud: created boss on angled plane, then extruded cut flush to create speaker pocket.

**Learned**  
- Revisiting previously completed parts is important—design and dimensions may change based on interactions.

**Next**  
- Continue shroud development and figure out mate with vertical tube.
```
