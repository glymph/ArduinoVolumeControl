# ArduinoVolumeControl
Using an Arduino Micro or Leonardo to send volume up and down keypresses via USB.

The program in this project listens for movement of a rotary encoder and sends up and down volume media control keypresses.

Inspiration was taken from the following projects:

https://github.com/dkgrieshammer/Arduino-rotaryEncoder/tree/master
https://wokwi.com/projects/304184909747978816

The HID-Project library is used to send the keypresses:

https://github.com/NicoHood/HID/wiki/Consumer-API

Here is a photograph of the project in a suitably sized box. Note that the rotary encoder is connected to pins 3 and 4 of the Arduino Micro, as defined in the sourcecode.

![A photograph of an Arduino Micro and a rotary encoder on a piece of strip-board](https://github.com/glymph/ArduinoVolumeControl/blob/main/ArduinoMicro+RotaryEncoder.png?raw=true)
