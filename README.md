[![MCHP](images/microchip.png)](https://www.microchip.com)

# Getting Started with GPIO (General Purpose Input/Output) Examples (MPLAB® X)

This repository contains examples of the MCC generated source code for General Purpose Input/Output (GPIO), as described in the [TB3229 - Getting Started with General Purpose Input/Output (GPIO)](https://ww1.microchip.com/downloads/en/Appnotes/Getting-Started-with-GPIO-DS90003229B.pdf) document from Microchip. The repository contains three MPLAB® X projects:

- [<strong>Blink an LED:</strong>](Blink_an_LED) This use case shows how to toggle a pin connected to an LED (for more details, see [<strong>Blink an LED</strong>](Blink_an_LED))
- [<strong>Long and Short button press:</strong>](Long_And_Short_Button_Press) This project uses a pin as input to distinguish between a long and short button press, defined by a delay threshold (for more details, see [<strong>Long and Short button press</strong>](Long_And_Short_Button_Press))
- [<strong>Wake-Up On Button Press:</strong>](Wake_Up_On_Button_Press) Exits Sleep on button press, turns on an LED and goes back to Sleep. On button release, the device exits Sleep, turns off the LED and goes back to Sleep (for more details, see [<strong>Wake-Up On Button Press</strong>](Wake_Up_On_Button_Press))

## Related Documentation

More details and code examples on the AVR128DA48 can be found at the following links:

- [TB3229 - Getting Started with General Purpose Input/Output (GPIO)](https://ww1.microchip.com/downloads/en/Appnotes/Getting-Started-with-GPIO-DS90003229B.pdf)
- [AVR128DA48 Product Page](https://www.microchip.com/wwwproducts/en/AVR128DA48)
- [AVR128DA48 Code Examples on GitHub](https://github.com/microchip-pic-avr-examples?q=avr128da48)
- [AVR128DA48 Project Examples in START](https://start.atmel.com/#examples/AVR128DA48CuriosityNano)

## Software Used

- [MPLAB® X IDE](http://www.microchip.com/mplab/mplab-x-ide) v6.10 or newer
- [MPLAB® XC8](http://www.microchip.com/mplab/compilers) v2.41 or newer
- [AVR-Dx Series Device Pack](https://packs.download.microchip.com/) v2.3.272 or newer
- [MPLAB® Code Configurator](https://www.microchip.com/en-us/tools-resources/configure/mplab-code-configurator) v5.3.7 or newer
- [MPLAB® Code Configurator Melody](https://www.microchip.com/en-us/tools-resources/configure/mplab-code-configurator/melody) v2.5.0 or newer
- AVR Devices Library v4.7.0 or newer
- Content Manager v4.2.6 or newer

## Hardware Used

- AVR128DA48 Curiosity Nano [(DM164151)](https://www.microchip.com/Developmenttools/ProductDetails/DM164151)
