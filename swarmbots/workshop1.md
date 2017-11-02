# Microcontroller Basics
# Lighting up an LED
## Items Required:
1. Arduino board
2. LED
3. 220 Ω resistor
## Circuit
![circuit image](https://screenshots.firefoxusercontent.com/images/9cda65d3-bb8e-48d0-944f-e0f3a9b74855.png)
## Code
```c
const int led_pin = 8; 

void setup()
{
  pinMode(led_pin, OUTPUT);
}

void loop()
{
  digitalWrite(led_pin, HIGH);
  delay(1000);
  digitalWrite(led_pin, LOW);
  delay(1000);
}
```
# Bare microcontroller on breadboard
## Burning the bootloader:
1. Download this hardware configuration archive: [breadboard-1-6-x.zip](https://www.arduino.cc/en/uploads/Tutorial/breadboard-1-6-x.zip)
2. Create a "hardware" sub-folder in your Arduino sketchbook folder (whose location you can find in the Arduino preferences dialog).
3. Move the breadboard folder from the zip archive to the "hardware" folder of your Arduino sketchbook.
4. Restart the Arduino software.
5. You should see "ATmega328 on a breadboard (8 MHz internal clock)" in the Tools > Board menu.
6. Wire up the Arduino board and microcontroller as shown in the EAGLE schematic.
![bootloader schematic image](https://i.imgur.com/aYAJ38H.jpg)
7. Select "ATmega328 on a breadboard (8 MHz internal clock)" as the board type using Tools > Board.
8. Select "Arduino as ISP" from Tools > Programmer
9. Run Tools > Burn Bootloader
10. After burning the bootloader, you can remove the jumper wires connected to pins 10, 11, 12, and 13 of the Arduino board.

## Uploading sketches to microcontroller on breadboard
1. Wire up the Arduino board and microcontroller as shown in the next EAGLE schematic.
![upload sketch schematic image](https://i.imgur.com/xj3L02i.jpg)
2. Select "ATmega328 on a breadboard (8 MHz internal clock)" as the board type using Tools > Board.
3. Upload the sketch as usual (Ctrl+U, or Sketch > Upload, or the right arrow button).

## Lighting an LED using microcontroller on breadboard
1. Before uploading the LED blinking sketch we wrote earlier, change `led_pin` to 9. Then upload the sketch to the microcontroller on the breadboard.
1. Wire up the Arduino board and microcontroller as shown in the next EAGLE schematic.
![LED schematic image](https://i.imgur.com/3dzgj95.jpg)
2. If the correct sketch was uploaded to the microcontroller, you should see the LED blinking.
