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

- [MPLAB® X IDE](http://www.microchip.com/mplab/mplab-x-ide) v6.10 or newer
- [MPLAB® XC8](http://www.microchip.com/mplab/compilers) v2.41 or newer
- [AVR-Dx Series Device Pack](https://packs.download.microchip.com/) v2.3.272 or newer
- [MPLAB® Code Configurator](https://www.microchip.com/en-us/tools-resources/configure/mplab-code-configurator) v5.3.7 or newer
- [MPLAB® Code Configurator Melody](https://www.microchip.com/en-us/tools-resources/configure/mplab-code-configurator/melody) v2.5.0 or newer
- AVR Devices Library v4.7.0 or newer
- Content Manager v4.2.6 or newer

## Hardware Used

- AVR128DA48 Curiosity Nano [(DM164151)](https://www.microchip.com/Developmenttools/ProductDetails/DM164151)

## Setup

The AVR128DA48 Curiosity Nano Development Board is used as test platform.

<br><img src="../images/AVR128DA48_CNANO_instructions.png" width="500">

The following configurations must be made for this project:

- Clock configured for 3.33 MHz
- Sleep mode in Power-Down mode
- Global Interrupts enabled

|     Pin      |         Configuration          |
| :----------: | :----------------------------: |
|  PC6 (LED)   |   Digital output, start high   |
| PC7 (Button) | Digital input, pull-up enabled |

## Operation

1.  Connect the board to the PC.

2.  Open the Wake_Up_On_Button_Press.X project in MPLAB® X IDE.

3.  Set the Wake_Up_On_Button_Press.X project as main project. Right click on the project in the **Projects** tab and click **Set as Main Project**.

<br><img src="../images/set_main_project.png" height="500">

4.  Clean and build the Wake_Up_On_Button_Press.X project. Right click on the **Wake_Up_On_Button_Press.X** project and select **Clean and Build**.

<br><img src="../images/clean_build.png" height="500">

5.  Select the **AVR128DA48 Curiosity Nano** in the Connected Hardware Tool section of the project settings:

- Right click on the project and cimage.pnglick **Properties**;
- Click on the arrow under the Connected Hardware Tool;
- Select the **AVR128DA48 Curiosity Nano** (click on the **SN**), click **Apply** and then click **OK**:

<br><img src="../images/device.png" height="500">

6.  Program the project to the board. Right click on the project and click **Make and Program Device**.

<br><img src="../images/make_program.png" height="500">

Demo:
<br><img src="images/demo.png" height ="200">

The image above shows the waveform of the button and the LED pins.

## Summary

This demo shows how to use the device in Sleep mode. The device exits Sleep mode on button press, turns on an LED and goes back to Sleep. On button release, the device exits Sleep, turns off the LED and goes back to Sleep.
