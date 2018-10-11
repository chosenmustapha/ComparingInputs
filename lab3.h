/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */


// PIC18F1330 Configuration Bit Settings

// 'C' source line config statements

#include <xc.h>

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

// CONFIG1H
#pragma config OSC = INTIO1     // Oscillator (Internal oscillator, CLKO function on RA6, port function on RA7)
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor disabled)
#pragma config IESO = OFF       // Internal/External Oscillator Switchover bit (Oscillator Switchover mode disabled)

// CONFIG2L
#pragma config PWRT = OFF       // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOR = OFF        // Brown-out Reset Enable bits (Brown-out Reset disabled in hardware and software)
#pragma config BORV = 3         // Brown-out Reset Voltage bits (Minimum setting)

// CONFIG2H
#pragma config WDT = OFF        // Watchdog Timer Enable bit (WDT disabled (control is placed on the SWDTEN bit))
#pragma config WDTPS = 32768    // Watchdog Timer Postscale Select bits (1:32768)

// CONFIG3L
#pragma config PWMPIN = OFF     // PWM Output Pins Reset State Control bit (PWM outputs disabled upon Reset)
#pragma config LPOL = HIGH      // Low-Side Transistors Polarity bit (Even PWM Output Polarity Control bit) (PWM0, PWM2 and PWM4 are active-high (default))
#pragma config HPOL = HIGH      // High Side Transistors Polarity bit (Odd PWM Output Polarity Control bit) (PWM1, PWM3 and PWM5 are active-high (default))

// CONFIG3H
#pragma config FLTAMX = RA5     // FLTA Mux bit (FLTA input is muxed onto RA5)
#pragma config T1OSCMX = LOW    // T1OSO/T1CKI MUX bit (T1OSO/T1CKI pin resides on RB2)
#pragma config MCLRE = OFF      // Master Clear Enable bit (RA5 input pin enabled, MCLR pin disabled)

// CONFIG4L
#pragma config STVREN = OFF     // Stack Overflow/Underflow Reset Enable bit (Reset on stack overflow/underflow disabled)
#pragma config BBSIZ = BB256    // Boot Block Size Select bits (256 Words (512 Bytes) Boot Block size)
#pragma config XINST = OFF      // Extended Instruction Set Enable bit (Instruction set extension and Indexed Addressing mode disabled)

// CONFIG5L
#pragma config CP0 = OFF        // Code Protection bit Block 0 (000800-000FFF) (Block 0 is not code-protected)
#pragma config CP1 = OFF        // Code Protection bit Block 1 (001000-001FFF) (Block 1 is not code-protected)

// CONFIG5H
#pragma config CPB = OFF        // Code Protection bit (Boot Block Memory Area) (Boot Block is not code-protected)
#pragma config CPD = OFF        // Code Protection bit (Data EEPROM) (Data EEPROM is not code-protected)

// CONFIG6L
#pragma config WRT0 = OFF       // Write Protection bit Block 0 (000800-000FFF) (Block 0 is not write-protected)
#pragma config WRT1 = OFF       // Write Protection bit Block 1 (001000-001FFF) (Block 1 is not write-protected)

// CONFIG6H
#pragma config WRTC = OFF       // Write Protection bit (Configuration Registers) (Configuration registers are not write-protected)
#pragma config WRTB = OFF       // Write Protection bit (Boot Block Memory Area) (Boot Block is not write-protected)
#pragma config WRTD = OFF       // Write Protection bit (Data EEPROM) (Data EEPROM is not write-protected)

// CONFIG7L
#pragma config EBTR0 = OFF      // Table Read Protection bit Block 0 (000800-000FFF) (Block 0 is not protected from table reads executed in other blocks)
#pragma config EBTR1 = OFF      // Table Read Protection bit Block 1 (001000-001FFF) (Block 1 is not protected from table reads executed in other blocks)

// CONFIG7H
#pragma config EBTRB = OFF      // Table Read Protection bit (Boot Block Memory Area) (Boot Block is not protected from table reads executed in other blocks

#define _XTAL_FREQ  4000000


