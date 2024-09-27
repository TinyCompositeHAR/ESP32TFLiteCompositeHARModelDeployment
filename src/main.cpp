#include <Arduino.h>
#include "SimpleMLP.h"
#include <tflm_esp32.h>
#include <eloquent_tinyml.h>

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
    if (!convMLP.predict(x20).isOk()) {
        Serial.println(convMLP.exception.toString());
        return;
    }

    Serial.print("expected class 20, predicted class ");
    Serial.println(convMLP.classification);

    Serial.print("It takes ");
    Serial.print(convMLP.benchmark.microseconds());
    Serial.println("us for a single prediction");
    delay(1000);
}
