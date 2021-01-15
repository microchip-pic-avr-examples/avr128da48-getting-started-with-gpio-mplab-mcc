[![MCHP](../images/microchip.png)](https://www.microchip.com)

# Wake-Up on Button Press

This example demonstrates the usage of interrupts and Sleep mode. The microcontroller exits Sleep on button press, turns on an LED and goes back to Sleep. On button release, it exits Sleep, turns off the LED and goes back to Sleep. The LED is ON while the button is pressed, but the device can be in Sleep mode.

## Related Documentation

More details and code examples on the AVR128DA48 can be found at the following links:

- [TB3229 - Getting Started with General Purpose Input/Output (GPIO)](https://ww1.microchip.com/downloads/en/Appnotes/Getting-Started-with-GPIO-DS90003229B.pdf)
- [AVR128DA48 Product Page](https://www.microchip.com/wwwproducts/en/AVR128DA48)
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

## Setup

The AVR128DA48 Curiosity Nano Development Board is used as test platform.

<br><img src="../images/AVR128DA48_CNANO_instructions.png" width="500">

The following configurations must be made for this project:

- Clock configured for 3.33 MHz
- Sleep mode in Power-Down mode
- Interrupts enabled
- Pins used for LED and button

| Pin |   Configuration    |
| :-: | :----------------: |
| PC6 |       Output       |
| PC7 | Input with pull-up |

## Operation

1.  Connect the board to the PC.

2.  Open the Wake_Up_On_Button_Press.X project in MPLAB® X IDE.

3.  Set the Wake_Up_On_Button_Press.X project as main project. Right click on the project in the **Projects** tab and click **Set as Main Project**.

<br><img src="../images/setmain.PNG" height="500">

4.  Clean and build the Wake_Up_On_Button_Press.X project. Right click on the **Wake_Up_On_Button_Press.X** project and select **Clean and Build**.

<br><img src="../images/cleanbuild.PNG" height="500">

5.  Select the **AVR128DA48 Curiosity Nano** in the Connected Hardware Tool section of the project settings:

- Right click on the project and click **Properties**;
- Click on the arrow under the Connected Hardware Tool;
- Select the **AVR128DA48 Curiosity Nano** (click on the **SN**), click **Apply** and then click **OK**:

<br><img src="../images/device.PNG" height="500">

6.  Program the project to the board. Right click on the project and click **Make and Program Device**.

<br><img src="../images/makeprog.PNG" height="500">

Demo:
<br><img src="images/demo.png" height ="200">

The image above shows the waveform of the button and the LED pins. 

## Summary

This demo shows how to use the device in Sleep mode. The device exits Sleep mode on button press, turns on an LED and goes back to Sleep. On button release, the device exits Sleep, turns off the LED and goes back to Sleep.
