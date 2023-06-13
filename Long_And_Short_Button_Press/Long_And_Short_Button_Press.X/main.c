 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
*/

/*
© [2023] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/
#include "mcc_generated_files/system/system.h"
#include <util/delay.h>

#define STEP_DELAY          10
#define THRESHOLD           100					
#define LONG_DELAY          500
#define SHORT_DELAY         100
#define NUMBER_OF_BLINKS    3

inline static void LED_blink(uint32_t delay);

/*
    Main application
*/

int main(void)
{
    uint8_t counter = 0;

    SYSTEM_Initialize();

    while (1)
    {
        if (BUTTON_GetValue() == 0) /* check if button is pulled to GND */
        {
            while (BUTTON_GetValue() == 0) /* wait until button is pulled to VDD */
            {
                _delay_ms(STEP_DELAY);
                counter++;
                if (counter >= THRESHOLD)
                {
                    LED_blink(LONG_DELAY);
                    while (BUTTON_GetValue() == 0) /* wait until button is pulled to VDD */
                    {
                        ;
                    }
                    break;
                }
            }
            if (counter < THRESHOLD)
            {
                LED_blink(SHORT_DELAY);
            }
            counter = 0;
        }
    }
}

inline static void LED_blink(uint32_t time_ms)
{
    for (uint8_t i = 0; i < NUMBER_OF_BLINKS; i++)
    {
        LED_SetLow();
        _delay_ms(time_ms);
        LED_SetHigh();
        _delay_ms(time_ms);
    }
}