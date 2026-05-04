# Traffic-Light-Simulation
A basic Arduino-based project that simulates the traffic light on the street

⚡ ELECTRICAL SYSTEMS

This project implements a traffic light simulation using multiple RGB LEDs (Red, Green, Yellow) to replicate real-world signal behavior. Each LED is connected to an Arduino Uno digital output pin and protected with 220 Ω current-limiting resistors to prevent overcurrent and ensure safe operation.

Microcontroller: Arduino Uno R3
Circuit: Breadboard prototype
Components: LEDs, Resistors (220 Ohms)
Control Method: Pulse-Width-Modulation (PWM)

The circuit design includes:

Proper series resistor placement for each LED channel
Parallel LED configuration with independent control lines
Stable 5V/3.3V power distribution from the Arduino
Consideration of current limits per I/O pin and total board current

Pulse Width Modulation (PWM) pins are used to control LED brightness levels, enabling smoother transitions and more realistic traffic light behavior (e.g., gradual fading if implemented).



💻 SOFTWARE

The system is programmed in C++ using the Arduino IDE, running on the Arduino Uno microcontroller. The software controls the timing and sequencing of the traffic light states using PWM signals and digital outputs.

Key features:

State-based logic for traffic light phases (Red → Green → Yellow → Red)
Timing control using delay() or non-blocking techniques (e.g., millis() if implemented)
PWM control for LED intensity and transitions
Modular and readable code structure for easy expansion (e.g., adding pedestrian signals or multiple intersections)

The program ensures accurate timing cycles and reliable switching between states, closely mimicking real-world traffic control systems.
