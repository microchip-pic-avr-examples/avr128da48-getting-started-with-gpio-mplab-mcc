<!-- Please do not change this logo with link -->

[![MCHP](images/microchip.png)](https://www.microchip.com)

# Getting Started with GPIO (General Purpose Input/Output) Examples (MPLAB® X)

This repository contains examples of the MCC generated source code for General Purpose Input/Output (GPIO), as described in the [Getting Started with GPIO](http://ww1.microchip.com/downloads/en/Appnotes/90003229A.pdf) document from Microchip. The repository contains three MPLAB® X projects:

- [<strong>Blinking an LED:</strong>](LED_Toggle) This use case shows how to toggle a pin connected to an LED (for more details, see [<strong>Blinking an LED</strong>](LED_Toggle))
- [<strong>Long and Short button press:</strong>](Detect_Long_And_Short_Button_Press) This project uses a pin as input to distinguish between a long and short button press, defined by a delay threshold (for more details, see [<strong>Long and Short button press</strong>](Detect_Long_And_Short_Button_Press))
- [<strong>Wake-Up On Button Press:</strong>](Wake_Up_On_Button_Press) Exits Sleep on button press, turns on an LED and goes back to Sleep. On button release, the device exits Sleep, turns off the LED and goes back to Sleep (for more details, see [<strong>Wake-Up On Button Press</strong>](Wake_Up_On_Button_Press))

## Related Documentation

More details and code examples on the AVR128DA48 can be found at the following links:

- [TB3229 Getting Started with GPIO (General Purpose Input/Output)](http://ww1.microchip.com/downloads/en/Appnotes/90003229A.pdf)
- [AVR128DA48 Product Page](https://www.microchip.com/wwwproducts/en/AVR128DA28)
- [AVR128DA48 Code Examples on GitHub](https://github.com/microchip-pic-avr-examples?q=avr128da48)
- [AVR128DA48 Project Examples in START](https://start.atmel.com/#examples/AVR128DA48CuriosityNano)

## Software Used

- MPLAB® X IDE 5.40 or newer [(microchip.com/mplab/mplab-x-ide)](http://www.microchip.com/mplab/mplab-x-ide)
- MPLAB® XC8 2.30 or a newer compiler [(microchip.com/mplab/compilers)](http://www.microchip.com/mplab/compilers)
- MPLAB® Code Configurator (MCC) 4.0.1 or newer [(microchip.com/mplab/mplab-code-configurator)](https://www.microchip.com/mplab/mplab-code-configurator)
- MPLAB® Code Configurator (MCC) Device Libraries 8-bit AVR® MCUs 2.5.0 or newer [(microchip.com/mplab/mplab-code-configurator)](https://www.microchip.com/mplab/mplab-code-configurator)
- AVR-Dx 1.4.75 or newer Device Pack

## Hardware Used

- AVR128DA48 Curiosity Nano [(DM164151)](https://www.microchip.com/Developmenttools/ProductDetails/DM164151)