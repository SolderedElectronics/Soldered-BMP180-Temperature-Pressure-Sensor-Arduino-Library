# Pressure & temperature sensor BMP180 breakout Arduino library

[![Make docs and publish to GitHub Pages](https://github.com/SolderedElectronics/Soldered-BMP180-Temperature-Pressure-Sensor-Arduino-Library/actions/workflows/make_docs.yml/badge.svg?branch=dev)](https://github.com/SolderedElectronics/Soldered-BMP180-Temperature-Pressure-Sensor-Arduino-Library/actions/workflows/make_docs.yml)

| ![Pressure & temperature sensor BMP180 breakout](https://upload.wikimedia.org/wikipedia/commons/8/8f/Example_image.svg) |
| :---------------------------------------------------------------------------------------------------------------------: |
|                      [Pressure & temperature sensor BMP180 breakout](https://www.solde.red/333060)                      |

Ever wanted to build your own weather station using Arduino? Then the BMP180 breakout board with precision sensor from Bosch might interest you. The digital sensor on the board precisely measures the changes in barometric pressure and temperature. It uses the piezoresistive effect to gather the information. Since the pressure varies depending on height, the sensor can measure altitude too. Very low current consumption and voltage allow this type of sensor to be used in many modern devices.

The design is 5V ready with an onboard regulator for 3.3V. The breakout board’s standard current consumption is very low, only 5 µA. It uses an I2C interface, and the I2C address is 0x77. No soldering, nor need for distinguishing between SDA and SCL is required due to easyC. The sensor has integrated EEPROM memory with data for calibration. The pressure is measured in steps of 1hPa (=0.01hPa =0,01mbar), and 0.1°C for temperature.

- Dimensions: 22 mm x 22 mm
- Standard current consumption: 5 µA
- Standby current consumption: 0.1 µA
- Logic voltage level: 5V (on I2C header), 3V3 on easyC
- Operating voltage: 5V (onboard regulator for 3.3V)
- Pressure measurement span: 300 - 1100 hPa; ±0.02hPa deviation
- Altitude measurement span: 9000 m to -500 m above sea level
- Temperature measurement span: -40 to +85°C; ±2°C accuracy
- Communication: I2C (address: 0x77)
- Connectors: easyC x2
- Mounting holes: 2 (https://www.soldered.com/en/easyC)

### Repository Contents

- **/src** - source files for the library (.h & .cpp)
- **/examples** - examples for using the library
- **_other_** - _keywords_ file highlights function words in your IDE, _library.properties_ enables implementation with Arduino Library Manager.

### Hardware design

You can find hardware design for this board in [_Pressure & temperature sensor BMP180 breakout_](https://github.com/SolderedElectronics/NAZIVPROIZVODA-hardware-design) hardware repository.

### Documentation

Access Arduino library documentation [here](https://SolderedElectronics.github.io/Soldered-BMP180-Temperature-Pressure-Sensor-Arduino-Library/).

- Tutorial for using the NAZIV PROIZVODA board
- Installing an Arduino library

### Board compatibility

The library is compatible with board & microcontroller families shown in green below:

[![Compile Sketches](http://github-actions.40ants.com/e-radionicacom/Soldered-BMP180-Temperature-Pressure-Sensor-Arduino-Library/matrix.svg?branch=dev&only=Compile%20Sketches)](https://github.com/SolderedElectronics/Soldered-BMP180-Temperature-Pressure-Sensor-Arduino-Library/actions/workflows/compile_test.yml)

### About Soldered

<img src="https://raw.githubusercontent.com/e-radionicacom/Soldered-BMP180-Temperature-Pressure-Sensor-Arduino-Library/dev/extras/Soldered-logo-color.png" alt="soldered-logo" width="500"/>

At Soldered, we design and manufacture a wide selection of electronic products to help you turn your ideas into acts and bring you one step closer to your final project. Our products are intented for makers and crafted in-house by our experienced team in Osijek, Croatia. We believe that sharing is a crucial element for improvement and innovation, and we work hard to stay connected with all our makers regardless of their skill or experience level. Therefore, all our products are open-source. Finally, we always have your back. If you face any problem concerning either your shopping experience or your electronics project, our team will help you deal with it, offering efficient customer service and cost-free technical support anytime. Some of those might be useful for you:

- [Web Store](https://www.soldered.com/shop)
- [Tutorials & Projects](https://soldered.com/learn)
- [Community & Technical support](https://soldered.com/community)

### Original source

​
This library is possible thanks to original [arduino-mcp23017](https://github.com/blemasle/arduino-mcp23017) library. Thank you, blemasle.

### Open-source license

Soldered invests vast amounts of time into hardware & software for these products, which are all open-source. Please support future development by buying one of our products.

Check license details in the LICENSE file. Long story short, use these open-source files for any purpose you want to, as long as you apply the same open-source licence to it and disclose the original source. No warranty - all designs in this repository are distributed in the hope that they will be useful, but without any warranty. They are provided "AS IS", therefore without warranty of any kind, either expressed or implied. The entire quality and performance of what you do with the contents of this repository are your responsibility. In no event, Soldered (TAVU) will be liable for your damages, losses, including any general, special, incidental or consequential damage arising out of the use or inability to use the contents of this repository.

## Have fun!

And thank you from your fellow makers at Soldered Electronics.
