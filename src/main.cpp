#include <Arduino.h>
#include "SimpleMLP.h"
#include <tflm_esp32.h>
#include <eloquent_tinyml.h>
#include "esp_system.h"
#include "esp32-hal-cpu.h"  // For CPU frequency

// Needs min of 6k ish for it work properly
#define ARENA_SIZE 6000

Eloquent::TF::Sequential<TF_NUM_OPS, ARENA_SIZE> convMLP;

void setup() {
    Serial.begin(115200);
    Serial.println("__TENSORFLOW MLP__");
    delay(3000);

    while (!convMLP.begin(SimpleMLP).isOk())
        Serial.println(convMLP.exception.toString());
}

void loop() {
    // Capture start time
    uint32_t startTime = micros();

    if (!convMLP.predict(x20).isOk()) {
        Serial.println(convMLP.exception.toString());
        return;
    }

    // Measure CPU frequency (in MHz)
    uint32_t cpuFreq = getCpuFrequencyMhz();

    // Calculate elapsed time for prediction
    uint32_t elapsedTime = micros() - startTime;

    // Print the prediction result
    Serial.print("expected class 20, predicted class ");
    Serial.println(convMLP.classification);

    // Print the time taken for prediction
    Serial.print("It takes ");
    Serial.print(elapsedTime);
    Serial.println(" us for a single prediction");

    // Print CPU frequency
    Serial.print("CPU Frequency: ");
    Serial.print(cpuFreq);
    Serial.println(" MHz");

    // Print free heap memory
    Serial.print("Free heap memory: ");
    Serial.print(esp_get_free_heap_size());
    Serial.println(" bytes");

    delay(1000);
}
