/*
 * File:   lab3.c
 * Author: Mustapha
 *
 * Created on May 3, 2016, 12:33 PM
 */


#include <xc.h>
#include    <stdlib.h>
#include    "lab3.h"

void main(void) {
    
    TRISBbits.RB0   =   1;
    TRISBbits.RB1   =   1;
    
    TRISBbits.RB4   =   0;
    PORTBbits.RB4   =   0;
            
    TRISBbits.RB5   =   0;
    PORTBbits.RB5   =   0;
   
    
    OSCCON  =   0X6C;
    
    // Initialize PORTA Bit 1 as an analog input (not digital)

    ADCON1bits.PCFG1 = 0;
    TRISAbits.RA1 = 1;
            
    // SET UP THE ANALOG-DIGITAL CONVERTER

    ADCON2bits.ADFM = 0;        // Left Justify
    ADCON1bits.VCFG0 = 0;        //  Use 5V Vdd as the reference

    ADCON0bits.CHS1 = 0;     //Select Channel 1
    ADCON0bits.CHS0 = 1;

    ADCON2bits.ACQT2 = 0;    // Select Aquisition Time
    ADCON2bits.ACQT1 = 0;
    ADCON2bits.ACQT0 = 0;

    ADCON2bits.ADCS2 = 1;    // Select Conversion Clock
    ADCON2bits.ADCS1 = 0;
    ADCON2bits.ADCS0 = 0;

    ADCON0bits.ADON = 1;     // Turn on ADC Module
    
    //Start_Test

       while(1)
       {

        ADCON0bits.GO = 1;
        while (ADCON0bits.GODONE == 1)
        {}
        
        if( PORTBbits.RB0    ==  1   &&  PORTBbits.RB1   ==  1   &&  ADRESH  >= 0XD1  )
            
        {
            PORTBbits.RB4   =   1;
            PORTBbits.RB5   =   0;
        }
        else
        {
            PORTBbits.RB4   =   0;
            PORTBbits.RB5   =   0;
        }
        
        if( PORTBbits.RB0   ==  0   &&  PORTBbits.RB1   ==  0   &&  ADRESH  >=  0XF &&  ADRESH  <=  0X1F)
        {
            PORTBbits.RB4   =   1;
            PORTBbits.RB5   =   1;
        }
        else
        {
            PORTBbits.RB4   =   0;
            PORTBbits.RB5   =   0;
        }
        
        if( PORTBbits.RB0   ==  1   &&  PORTBbits.RB1   ==  0   &&  ADRESH  >=  0XD7    &&  ADRESH  <=  0XEC)
            
        {
            PORTBbits.RB4   =   1;
            PORTBbits.RB5   =   0;
        }
        else
        {
            PORTBbits.RB4   =   0;
            PORTBbits.RB5   =   0;  
        }
        
       }
    
    return;
}
