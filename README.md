# ArduinoVolumeControl
Using an Arduino Micro or Leonardo to send volume up and down keypresses via USB.

The program in this project listens for movement of a rotary encoder and sends up and down volume media control keypresses.

Inspiration was taken from the following projects:

https://github.com/dkgrieshammer/Arduino-rotaryEncoder/tree/master
https://wokwi.com/projects/304184909747978816

The HID-Project library is used to send the keypresses:

https://github.com/NicoHood/HID/wiki/Consumer-API
