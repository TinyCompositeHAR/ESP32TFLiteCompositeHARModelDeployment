#include <Arduino.h>
#include "SimpleMLP.h"
#include <tflm_esp32.h>
// now you can include the eloquent tinyml wrapper
#include <eloquent_tinyml.h>

// this is trial-and-error process
// when developing a new model, start with a high value
// (e.g. 10000), then decrease until the model stops
// working as expected
#define ARENA_SIZE 6000

Eloquent::TF::Sequential<TF_NUM_OPS, ARENA_SIZE> convMLP;

void setup() {
// #if 0
//     Serial.begin(115200);
//     Serial.println("\n##################################");
//     Serial.println(F("ESP32 Information:"));
//     Serial.printf("Internal Total Heap %d, Internal Used Heap %d, Internal Free Heap %d\n", ESP.getHeapSize(),
//                   ESP.getHeapSize() - ESP.getFreeHeap(), ESP.getFreeHeap());
//     Serial.printf("Sketch Size %d, Free Sketch Space %d\n", ESP.getSketchSize(), ESP.getFreeSketchSpace());
//     Serial.printf("SPIRam Total heap %d, SPIRam Free Heap %d\n", ESP.getPsramSize(), ESP.getFreePsram());
//     Serial.printf("Chip Model %s, ChipRevision %d, Cpu Freq %d, SDK Version %s\n", ESP.getChipModel(),
//                   ESP.getChipRevision(), ESP.getCpuFreqMHz(), ESP.getSdkVersion());
//     Serial.printf("Flash Size %d, Flash Speed %d\n", ESP.getFlashChipSize(), ESP.getFlashChipSpeed());
//     Serial.println("##################################\n");
// #endif

    delay(3000);
    Serial.println("__TENSORFLOW MLP__");

    while (!convMLP.begin(SimpleMLP).isOk())
        Serial.println(convMLP.exception.toString());
}


void loop() {
    // classify class 0
    if (!convMLP.predict(x0).isOk()) {
        Serial.println(convMLP.exception.toString());
        return;
    }

    Serial.print("expected class 0, predicted class ");
    Serial.println(convMLP.classification);

    // how long does it take to run a single prediction?
    Serial.print("It takes ");
    Serial.print(convMLP.benchmark.microseconds());
    Serial.println("us for a single prediction");

    delay(1000);
}
