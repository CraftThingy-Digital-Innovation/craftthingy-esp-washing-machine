#include <Arduino.h>
#include <CraftThingyCore.h>
#include <controllers/WashingMachineController.h>

// On ESP32:
// Pin 12: Water inlet valve relay
// Pin 13: Wash motor relay
// Pin 14: Drain pump relay
static WashingMachineController washerController(12, 13, 14);

void setup() {
    Serial.begin(115200);
    delay(500);

    Serial.println();
    Serial.println(F("=================================================="));
    Serial.println(F(" CraftThingy - Washing Machine Controller         "));
    Serial.println(F("=================================================="));

    ConfigStore::init();
    ConfigStore::setActiveRole("washing_machine");
    ConfigStore::setGitHubConfig("CraftThingy-Digital-Innovation", 
                                 "craftthingy-esp-core-ota", 
                                 "craftthingy-esp-washing-machine", "");

    CraftThingyCore.begin(&washerController);
}

void loop() {
    CraftThingyCore.loop();
}
