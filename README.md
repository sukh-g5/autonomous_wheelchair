Teddy Bear Wheelchair (TBWC) Project

## Overview
Developed as a comprehensive engineering design project, the **Teddy Bear Wheelchair (TBWC)** is an autonomous mobility device featuring obstacle detection, motor control, and servo actuation. The project incorporates rigorous mechanical engineering analysis (center of mass and tipping evaluations), life cycle environmental impact assessments, electrical schematic design via AutoCAD, and embedded C++ firmware written for Arduino microcontrollers.



## Key Features & Engineering Design
- Autonomous Navigation & Sensor Integration: Utilizes an ultrasonic sensor to measure real time distances to obstacles, dynamically switching between forward motion, reversing, stopping, and triggering an onboard servo mechanism when objects are within target thresholds.
- Dual-Mode Microcontroller Architecture:**
  - Drive Code:Manages standard PWM motor driver outputs for directional control and precise timing delays.
  - Launch/Obstacle Code: Integrates Servo libraries and ultrasonic distance logic to coordinate automated responses and safety stops.
- Engineering Analysis:
  - Centre of Mass & Tipping Evaluation: Analyzed stability thresholds using spreadsheet modelling and physical dimensions.
  - Life Cycle Analysis (LCA): Quantified material impacts and environmental sustainability metrics across the TBWC build components.
- Mechanical & Electrical Documentation:
  - Complete 3D modelling and isometric component renders.
  - Full set of orthographic projection sketches (Front, Side, Back, and Top views).
  - Detailed electrical schematics and circuit wiring designed in AutoCAD.


## Project Management & Team Workflow
The project lifecycle was managed and tracked using structured engineering management tools:
- Work Breakdown Structure (WBS): Established early-stage milestone tracking and task dependencies.
- Critical Path Method (CPM): Identified schedule floats and optimized time allocation for testing and assembly phases.
- Gantt Charts: Iteratively updated across original, revised (Week 7), and final (Week 11) contracts to align team responsibilities, accountability, and reporting deadlines.


## Repository Structure
- Analysis:  Centre of mass calculations, tipping analysis data, and life cycle reports.
- CAD: Isometric drawings, orthographic projections, and 3D design files.
- Code: Contains the Arduino C++ firmware (`.ino` files) for motor driving and sensor launch logic.
- Electrical: AutoCAD circuit board diagrams and schematic layouts.
