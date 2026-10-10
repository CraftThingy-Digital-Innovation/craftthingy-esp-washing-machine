# CraftThingy - Washing Machine Controller

Automated washing machine cycle state machine firmware (Fill -> Wash -> Drain -> Spin -> Complete) powered by `craftthingy-esp-core-ota`.

## Hardware Wiring (ESP32)
- **GPIO 12**: Water Inlet Solenoid Valve Relay
- **GPIO 13**: Wash Motor Relay
- **GPIO 14**: Drain Pump Relay

## Building
```bash
pio run -e esp32dev
```
