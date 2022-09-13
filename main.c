/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F25K80
        Driver Version    :  2.00
 */

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

#include "mcc_generated_files/mcc.h"

void set_7_segments(uint8_t state) {
    switch (state) {
        case 0: // OFF
            IO_RA5_SetLow(); // LED
            IO_RB1_SetHigh(); // F
            IO_RB2_SetHigh(); // A
            IO_RB3_SetHigh(); // B
            IO_RB4_SetHigh(); // E
            IO_RB5_SetHigh(); // D
            IO_RC5_SetHigh(); // C
            IO_RC1_SetHigh(); // DP
            IO_RC2_SetHigh(); // G
            break;

        case 1: // ON
            IO_RA5_SetHigh(); // LED
            IO_RB1_SetLow(); // F
            IO_RB2_SetLow(); // A
            IO_RB3_SetLow(); // B
            IO_RB4_SetLow(); // E
            IO_RB5_SetLow(); // D
            IO_RC5_SetLow(); // C
            IO_RC1_SetLow(); // DP
            IO_RC2_SetLow(); // G
            break;

        case '0': // 0
            IO_RA5_SetHigh(); // LED
            IO_RB1_SetLow(); // F
            IO_RB2_SetLow(); // A
            IO_RB3_SetLow(); // B
            IO_RB4_SetLow(); // E
            IO_RB5_SetLow(); // D
            IO_RC5_SetLow(); // C
            IO_RC1_SetHigh(); // DP
            IO_RC2_SetHigh(); // G
            break;

        case '1': // 1
            IO_RA5_SetHigh(); // LED
            IO_RB1_SetHigh(); // F
            IO_RB2_SetHigh(); // A
            IO_RB3_SetLow(); // B
            IO_RB4_SetHigh(); // E
            IO_RB5_SetHigh(); // D
            IO_RC5_SetLow(); // C
            IO_RC1_SetHigh(); // DP
            IO_RC2_SetHigh(); // G
            break;

        case '2': // 2
            IO_RA5_SetHigh(); // LED
            IO_RB1_SetHigh(); // F
            IO_RB2_SetLow(); // A
            IO_RB3_SetLow(); // B
            IO_RB4_SetLow(); // E
            IO_RB5_SetLow(); // D
            IO_RC5_SetHigh(); // C
            IO_RC1_SetHigh(); // DP
            IO_RC2_SetLow(); // G
            break;

        case '3': // 3
            IO_RA5_SetHigh(); // LED
            IO_RB1_SetHigh(); // F
            IO_RB2_SetLow(); // A
            IO_RB3_SetLow(); // B
            IO_RB4_SetHigh(); // E
            IO_RB5_SetLow(); // D
            IO_RC5_SetLow(); // C
            IO_RC1_SetHigh(); // DP
            IO_RC2_SetLow(); // G
            break;

        case '4': // 4
            IO_RA5_SetHigh(); // LED
            IO_RB1_SetLow(); // F
            IO_RB2_SetHigh(); // A
            IO_RB3_SetLow(); // B
            IO_RB4_SetHigh(); // E
            IO_RB5_SetHigh(); // D
            IO_RC5_SetLow(); // C
            IO_RC1_SetHigh(); // DP
            IO_RC2_SetLow(); // G
            break;

        case '5': // 5
            IO_RA5_SetHigh(); // LED
            IO_RB1_SetLow(); // F
            IO_RB2_SetLow(); // A
            IO_RB3_SetHigh(); // B
            IO_RB4_SetHigh(); // E
            IO_RB5_SetLow(); // D
            IO_RC5_SetLow(); // C
            IO_RC1_SetHigh(); // DP
            IO_RC2_SetLow(); // G
            break;

        case '6': // 6
            IO_RA5_SetHigh(); // LED
            IO_RB1_SetLow(); // F
            IO_RB2_SetLow(); // A
            IO_RB3_SetHigh(); // B
            IO_RB4_SetLow(); // E
            IO_RB5_SetLow(); // D
            IO_RC5_SetLow(); // C
            IO_RC1_SetHigh(); // DP
            IO_RC2_SetLow(); // G
            break;

        case '7': // 7
            IO_RA5_SetHigh(); // LED
            IO_RB1_SetHigh(); // F
            IO_RB2_SetLow(); // A
            IO_RB3_SetLow(); // B
            IO_RB4_SetHigh(); // E
            IO_RB5_SetHigh(); // D
            IO_RC5_SetLow(); // C
            IO_RC1_SetHigh(); // DP
            IO_RC2_SetHigh(); // G
            break;

        case '8': // 8
            IO_RA5_SetHigh(); // LED
            IO_RB1_SetLow(); // F
            IO_RB2_SetLow(); // A
            IO_RB3_SetLow(); // B
            IO_RB4_SetLow(); // E
            IO_RB5_SetLow(); // D
            IO_RC5_SetLow(); // C
            IO_RC1_SetHigh(); // DP
            IO_RC2_SetLow(); // G
            break;

        case '9': // 9
            IO_RA5_SetHigh(); // LED
            IO_RB1_SetLow(); // F
            IO_RB2_SetLow(); // A
            IO_RB3_SetLow(); // B
            IO_RB4_SetHigh(); // E
            IO_RB5_SetLow(); // D
            IO_RC5_SetLow(); // C
            IO_RC1_SetHigh(); // DP
            IO_RC2_SetLow(); // G
            break;

        case 'A': // A
            IO_RA5_SetHigh(); // LED
            IO_RB1_SetLow(); // F
            IO_RB2_SetLow(); // A
            IO_RB3_SetLow(); // B
            IO_RB4_SetLow(); // E
            IO_RB5_SetHigh(); // D
            IO_RC5_SetLow(); // C
            IO_RC1_SetHigh(); // DP
            IO_RC2_SetLow(); // G
            break;

        case 'B': // B
            IO_RA5_SetHigh(); // LED
            IO_RB1_SetLow(); // F
            IO_RB2_SetHigh(); // A
            IO_RB3_SetHigh(); // B
            IO_RB4_SetLow(); // E
            IO_RB5_SetLow(); // D
            IO_RC5_SetLow(); // C
            IO_RC1_SetHigh(); // DP
            IO_RC2_SetLow(); // G
            break;

        case 'C': // C
            IO_RA5_SetHigh(); // LED
            IO_RB1_SetLow(); // F
            IO_RB2_SetLow(); // A
            IO_RB3_SetHigh(); // B
            IO_RB4_SetLow(); // E
            IO_RB5_SetLow(); // D
            IO_RC5_SetHigh(); // C
            IO_RC1_SetHigh(); // DP
            IO_RC2_SetHigh(); // G
            break;

        case 'D': // D
            IO_RA5_SetHigh(); // LED
            IO_RB1_SetHigh(); // F
            IO_RB2_SetHigh(); // A
            IO_RB3_SetLow(); // B
            IO_RB4_SetLow(); // E
            IO_RB5_SetLow(); // D
            IO_RC5_SetLow(); // C
            IO_RC1_SetHigh(); // DP
            IO_RC2_SetLow(); // G
            break;

        case 'E': // E
            IO_RA5_SetHigh(); // LED
            IO_RB1_SetLow(); // F
            IO_RB2_SetLow(); // A
            IO_RB3_SetHigh(); // B
            IO_RB4_SetLow(); // E
            IO_RB5_SetLow(); // D
            IO_RC5_SetHigh(); // C
            IO_RC1_SetHigh(); // DP
            IO_RC2_SetLow(); // G
            break;

        case 'F': // F
            IO_RA5_SetHigh(); // LED
            IO_RB1_SetLow(); // F
            IO_RB2_SetLow(); // A
            IO_RB3_SetHigh(); // B
            IO_RB4_SetLow(); // E
            IO_RB5_SetHigh(); // D
            IO_RC5_SetHigh(); // C
            IO_RC1_SetHigh(); // DP
            IO_RC2_SetLow(); // G
            break;
    }
}

/*
                         Main application
 */
void main(void) {
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    // INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Enable the Peripheral Interrupts
    // INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    // Mode off
    set_7_segments(0);
    __delay_ms(500);


    // Mode A to F
    for (uint8_t i = '0'; i <= '9'; i++) {
        set_7_segments(i);
        __delay_ms(500);
    }
    for (uint8_t i = 'A'; i <= 'F'; i++) {
        set_7_segments(i);
        __delay_ms(500);
    }

    // Mode blink
    set_7_segments(0);
    __delay_ms(500);
    set_7_segments(1);
    __delay_ms(200);
    set_7_segments(0);
    __delay_ms(500);
    set_7_segments(1);
    __delay_ms(200);
    set_7_segments(0);
    __delay_ms(500);
    set_7_segments(1);
    __delay_ms(200);
    set_7_segments(0);
    __delay_ms(500);

}
/**
 End of File
 */