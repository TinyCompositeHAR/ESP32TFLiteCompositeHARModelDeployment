<h1 align="center">
    ESP32TFLiteCompositeHARModelDeployment
</h1>

<h4 align="center">
    <a href="https://scikit-learn.org/stable/">
        <img src="https://img.shields.io/badge/scikit--learn 1.5.1-%23F7931E.svg?style=for-the-badge&logo=scikit-learn&logoColor=white"  alt="whatever"/>
    </a>
    <a href="https://www.tensorflow.org/">
        <img src="https://img.shields.io/badge/TensorFlow 2.17-FF6F00?style=for-the-badge&logo=tensorflow&logoColor=white"  alt="whatever">
    </a>
    <a href="https://keras.io/">
        <img src="https://img.shields.io/badge/Keras 3.4.1-FF0000?style=for-the-badge&logo=keras&logoColor=white"  alt="whatever">
    </a>
    <h5 align="center">
            <a href="https://en.cppreference.com/w/cpp/17">
                <img src="https://img.shields.io/badge/c++ 17-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white"  alt="whatever">
            </a>
    </h5>
</h4>

<h4 align="center">
    <div align="center">
        <hr width="250px"/>
    </div>
        <h4 align="center">Tools</h4>
        <h4 align="center">
            <a href="https://www.jetbrains.com/clion/">
                <img src="https://img.shields.io/badge/CLion-000000?style=for-the-badge&logo=clion&logoColor=white"  alt="whatever">
            </a>
            <a href="https://github.com/espressif/arduino-esp32/releases/tag/3.0.5">
                <img src="https://img.shields.io/badge/Arduino Core 3.0.5-00979D?style=for-the-badge&logo=Arduino&logoColor=white"  alt="whatever">
            </a>
            <a href="https://docs.espressif.com/projects/esp-idf/en/stable/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html">
                <img src="https://img.shields.io/badge/espressif32 s3 dev kit-E7352C.svg?style=for-the-badge&logo=espressif&logoColor=white"  alt="whatever"/>
            </a>
            <a href="https://www.tensorflow.org/lite">
                <img src="https://img.shields.io/badge/TFLITE-FF6F00?style=for-the-badge&logo=tensorflow&logoColor=white"  alt="whatever">
            </a>
            <a href="https://github.com/tensorflow/tflite-micro">
                <img src="https://img.shields.io/badge/TFLITE micro-FF6F00?style=for-the-badge&logo=tensorflow&logoColor=white"  alt="whatever">
            </a>
        </h4>
        <div align="center">
            <a href="https://platformio.org/">
                 <img src="https://img.shields.io/badge/PlatformIO-6.1.16-orange.svg"  alt="whatever">
            </a>
            <hr width="250px"/>   
        </div>
</h4>

This is a standard [platformio](https://platformio.org/) project for `esp32-s3-devkitc-1` 
board which deploys a simple [MLP](include/SimpleMLP.h) to ESP32-S3 Dev Kit.
For model training etc., please refer to
[this repository](https://github.com/TinyCompositeHAR/LowComputeCompositeADLModels).

### Acknowledgment

To speed the development time, compilation, and deployment, I have used the
[EloquentTinyML](https://github.com/eloquentarduino/EloquentTinyML/tree/5d3636f8ab5eddb23691c79e2dd14dd5858f8be3) library as
project dependency developed and
maintained by [eloquent arduino](https://github.com/eloquentarduino) which makes it
criminally easy to deploy TensorFlow Lite Micro models on ESP32 boards.

&#160;

<div align="center">Copyright &copy; 2024-present 
     <a href="https://github.com/Inmoresentum" target="_blank">Inmoresentum</a>
</div>

<h6 align="center">
   <a href="LICENSE.md">
      <img src="https://img.shields.io/static/v1.svg?style=for-the-badge&label=License&message=CC-BY-NC-ND-4.0&colorA=FFA500&colorB=FF69B4"
         alt="whatever" style="border-radius: 5px"/>
   </a>
</h6>