/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/
#define F_CPU 3333333

#include <avr/sleep.h>
#include <util/atomic.h>
#include <util/delay.h>
#include "mcc_generated_files/mcc.h"

volatile uint8_t buttonInterrupt = 0;

static void PORTC_Button_InterruptHandler(void)
{
    buttonInterrupt = 1;
}

/*
    Main application
*/
int main(void)
{
    /* Initializes MCU, drivers and middleware */
    SYSTEM_Initialize();
    PORTC_Button_SetInterruptHandler(PORTC_Button_InterruptHandler);
    
    set_sleep_mode(SLEEP_MODE_PWR_DOWN);
    
    /* Replace with your application code */
    while (1)
    {
        sleep_mode();
        
        ATOMIC_BLOCK(ATOMIC_FORCEON)
        {
            _delay_ms(10);
        }

        if(buttonInterrupt)
        {
            if(!Button_GetValue())
            {
                LED_SetLow();
            }
            else
            {
                LED_SetHigh();
            }
            
            buttonInterrupt = 0;
        }        
    }
}
/**
    End of File
*/