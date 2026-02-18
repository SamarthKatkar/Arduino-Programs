# Arduino Wire Loop Alarm

**Description**
This project simulates a "broken wire" security alarm system using an Arduino Uno. It demonstrates how to use digital inputs with the internal pull-up resistors (`INPUT_PULLUP`) to detect open circuits without external resistors.

## Key Features
- **Active-Low Logic:** The system triggers an alarm when the circuit is broken (signal goes HIGH), mimicking real-world window/door sensors.
- **Internal Pull-up:** Utilizes the ATmega328P's internal 20kΩ pull-up resistors, eliminating the need for external components on the input pin.
- **Status Indicator:** Provides visual feedback via an LED (ON = Alarm, OFF = Safe).
- **Serial Monitoring:** Outputs the sensor state (0 or 1) to the Serial Monitor for debugging.

## Hardware Required
1. **Arduino Uno** (or compatible board)
2. **LED** (connected to Pin 9)
3. **220Ω Resistor** (for the LED)
4. **Jumper Wire** (acts as the sensor switch on Pin 2)

## Circuit Logic
- **Pin 9 (Output):** Connected to the LED.
- **Pin 2 (Input):** Connected to a jumper wire.
  - **Wire Connected to GND:** Input reads `LOW` (0). System is Safe.
  - **Wire Disconnected:** Input is pulled `HIGH` (1) by the internal resistor. Alarm triggers.

## How to Use
1. Upload the `security_alarm.ino` code to your Arduino.
2. Open the **Serial Monitor** (9600 baud) to view the status.
3. Keep the jumper wire on Pin 2 connected to GND (Safe Mode).
4. Disconnect the wire from GND to trigger the alarm (LED turns ON).
