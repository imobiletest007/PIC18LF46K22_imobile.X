/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26
        Device            :  PIC18LF46K22
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LCM_DB0 aliases
#define LCM_DB0_TRIS               TRISAbits.TRISA0
#define LCM_DB0_LAT                LATAbits.LATA0
#define LCM_DB0_PORT               PORTAbits.RA0
#define LCM_DB0_ANS                ANSELAbits.ANSA0
#define LCM_DB0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LCM_DB0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LCM_DB0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LCM_DB0_GetValue()           PORTAbits.RA0
#define LCM_DB0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LCM_DB0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LCM_DB0_SetAnalogMode()  do { ANSELAbits.ANSA0 = 1; } while(0)
#define LCM_DB0_SetDigitalMode() do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set LCM_DB1 aliases
#define LCM_DB1_TRIS               TRISAbits.TRISA1
#define LCM_DB1_LAT                LATAbits.LATA1
#define LCM_DB1_PORT               PORTAbits.RA1
#define LCM_DB1_ANS                ANSELAbits.ANSA1
#define LCM_DB1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LCM_DB1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LCM_DB1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LCM_DB1_GetValue()           PORTAbits.RA1
#define LCM_DB1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LCM_DB1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LCM_DB1_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define LCM_DB1_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LCM_DB2 aliases
#define LCM_DB2_TRIS               TRISAbits.TRISA2
#define LCM_DB2_LAT                LATAbits.LATA2
#define LCM_DB2_PORT               PORTAbits.RA2
#define LCM_DB2_ANS                ANSELAbits.ANSA2
#define LCM_DB2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LCM_DB2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LCM_DB2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LCM_DB2_GetValue()           PORTAbits.RA2
#define LCM_DB2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LCM_DB2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LCM_DB2_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define LCM_DB2_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LCM_DB3 aliases
#define LCM_DB3_TRIS               TRISAbits.TRISA3
#define LCM_DB3_LAT                LATAbits.LATA3
#define LCM_DB3_PORT               PORTAbits.RA3
#define LCM_DB3_ANS                ANSELAbits.ANSA3
#define LCM_DB3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define LCM_DB3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define LCM_DB3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define LCM_DB3_GetValue()           PORTAbits.RA3
#define LCM_DB3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define LCM_DB3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define LCM_DB3_SetAnalogMode()  do { ANSELAbits.ANSA3 = 1; } while(0)
#define LCM_DB3_SetDigitalMode() do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set LCM_DB4 aliases
#define LCM_DB4_TRIS               TRISAbits.TRISA4
#define LCM_DB4_LAT                LATAbits.LATA4
#define LCM_DB4_PORT               PORTAbits.RA4
#define LCM_DB4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LCM_DB4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LCM_DB4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LCM_DB4_GetValue()           PORTAbits.RA4
#define LCM_DB4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LCM_DB4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)

// get/set LCM_DB5 aliases
#define LCM_DB5_TRIS               TRISAbits.TRISA5
#define LCM_DB5_LAT                LATAbits.LATA5
#define LCM_DB5_PORT               PORTAbits.RA5
#define LCM_DB5_ANS                ANSELAbits.ANSA5
#define LCM_DB5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LCM_DB5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LCM_DB5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LCM_DB5_GetValue()           PORTAbits.RA5
#define LCM_DB5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LCM_DB5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LCM_DB5_SetAnalogMode()  do { ANSELAbits.ANSA5 = 1; } while(0)
#define LCM_DB5_SetDigitalMode() do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set LCM_DB6 aliases
#define LCM_DB6_TRIS               TRISAbits.TRISA6
#define LCM_DB6_LAT                LATAbits.LATA6
#define LCM_DB6_PORT               PORTAbits.RA6
#define LCM_DB6_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define LCM_DB6_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define LCM_DB6_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define LCM_DB6_GetValue()           PORTAbits.RA6
#define LCM_DB6_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define LCM_DB6_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set LCM_DB7 aliases
#define LCM_DB7_TRIS               TRISAbits.TRISA7
#define LCM_DB7_LAT                LATAbits.LATA7
#define LCM_DB7_PORT               PORTAbits.RA7
#define LCM_DB7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define LCM_DB7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define LCM_DB7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define LCM_DB7_GetValue()           PORTAbits.RA7
#define LCM_DB7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define LCM_DB7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set MPB_UP aliases
#define MPB_UP_TRIS               TRISBbits.TRISB0
#define MPB_UP_LAT                LATBbits.LATB0
#define MPB_UP_PORT               PORTBbits.RB0
#define MPB_UP_WPU                WPUBbits.WPUB0
#define MPB_UP_ANS                ANSELBbits.ANSB0
#define MPB_UP_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define MPB_UP_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define MPB_UP_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define MPB_UP_GetValue()           PORTBbits.RB0
#define MPB_UP_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define MPB_UP_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define MPB_UP_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define MPB_UP_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)
#define MPB_UP_SetAnalogMode()  do { ANSELBbits.ANSB0 = 1; } while(0)
#define MPB_UP_SetDigitalMode() do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set MPB_DN aliases
#define MPB_DN_TRIS               TRISBbits.TRISB1
#define MPB_DN_LAT                LATBbits.LATB1
#define MPB_DN_PORT               PORTBbits.RB1
#define MPB_DN_WPU                WPUBbits.WPUB1
#define MPB_DN_ANS                ANSELBbits.ANSB1
#define MPB_DN_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define MPB_DN_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define MPB_DN_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define MPB_DN_GetValue()           PORTBbits.RB1
#define MPB_DN_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define MPB_DN_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define MPB_DN_SetPullup()      do { WPUBbits.WPUB1 = 1; } while(0)
#define MPB_DN_ResetPullup()    do { WPUBbits.WPUB1 = 0; } while(0)
#define MPB_DN_SetAnalogMode()  do { ANSELBbits.ANSB1 = 1; } while(0)
#define MPB_DN_SetDigitalMode() do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set M_INT2 aliases
#define M_INT2_TRIS               TRISBbits.TRISB2
#define M_INT2_LAT                LATBbits.LATB2
#define M_INT2_PORT               PORTBbits.RB2
#define M_INT2_WPU                WPUBbits.WPUB2
#define M_INT2_ANS                ANSELBbits.ANSB2
#define M_INT2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define M_INT2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define M_INT2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define M_INT2_GetValue()           PORTBbits.RB2
#define M_INT2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define M_INT2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define M_INT2_SetPullup()      do { WPUBbits.WPUB2 = 1; } while(0)
#define M_INT2_ResetPullup()    do { WPUBbits.WPUB2 = 0; } while(0)
#define M_INT2_SetAnalogMode()  do { ANSELBbits.ANSB2 = 1; } while(0)
#define M_INT2_SetDigitalMode() do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set M_G_SSI aliases
#define M_G_SSI_TRIS               TRISBbits.TRISB3
#define M_G_SSI_LAT                LATBbits.LATB3
#define M_G_SSI_PORT               PORTBbits.RB3
#define M_G_SSI_WPU                WPUBbits.WPUB3
#define M_G_SSI_ANS                ANSELBbits.ANSB3
#define M_G_SSI_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define M_G_SSI_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define M_G_SSI_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define M_G_SSI_GetValue()           PORTBbits.RB3
#define M_G_SSI_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define M_G_SSI_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define M_G_SSI_SetPullup()      do { WPUBbits.WPUB3 = 1; } while(0)
#define M_G_SSI_ResetPullup()    do { WPUBbits.WPUB3 = 0; } while(0)
#define M_G_SSI_SetAnalogMode()  do { ANSELBbits.ANSB3 = 1; } while(0)
#define M_G_SSI_SetDigitalMode() do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set M_G_INT aliases
#define M_G_INT_TRIS               TRISBbits.TRISB4
#define M_G_INT_LAT                LATBbits.LATB4
#define M_G_INT_PORT               PORTBbits.RB4
#define M_G_INT_WPU                WPUBbits.WPUB4
#define M_G_INT_ANS                ANSELBbits.ANSB4
#define M_G_INT_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define M_G_INT_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define M_G_INT_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define M_G_INT_GetValue()           PORTBbits.RB4
#define M_G_INT_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define M_G_INT_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define M_G_INT_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define M_G_INT_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define M_G_INT_SetAnalogMode()  do { ANSELBbits.ANSB4 = 1; } while(0)
#define M_G_INT_SetDigitalMode() do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set BAT_INDICATOR aliases
#define BAT_INDICATOR_TRIS               TRISBbits.TRISB5
#define BAT_INDICATOR_LAT                LATBbits.LATB5
#define BAT_INDICATOR_PORT               PORTBbits.RB5
#define BAT_INDICATOR_WPU                WPUBbits.WPUB5
#define BAT_INDICATOR_ANS                ANSELBbits.ANSB5
#define BAT_INDICATOR_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define BAT_INDICATOR_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define BAT_INDICATOR_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define BAT_INDICATOR_GetValue()           PORTBbits.RB5
#define BAT_INDICATOR_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define BAT_INDICATOR_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define BAT_INDICATOR_SetPullup()      do { WPUBbits.WPUB5 = 1; } while(0)
#define BAT_INDICATOR_ResetPullup()    do { WPUBbits.WPUB5 = 0; } while(0)
#define BAT_INDICATOR_SetAnalogMode()  do { ANSELBbits.ANSB5 = 1; } while(0)
#define BAT_INDICATOR_SetDigitalMode() do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set power_24_on aliases
#define power_24_on_TRIS               TRISCbits.TRISC1
#define power_24_on_LAT                LATCbits.LATC1
#define power_24_on_PORT               PORTCbits.RC1
#define power_24_on_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define power_24_on_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define power_24_on_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define power_24_on_GetValue()           PORTCbits.RC1
#define power_24_on_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define power_24_on_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set M_INDICATOR aliases
#define M_INDICATOR_TRIS               TRISCbits.TRISC2
#define M_INDICATOR_LAT                LATCbits.LATC2
#define M_INDICATOR_PORT               PORTCbits.RC2
#define M_INDICATOR_ANS                ANSELCbits.ANSC2
#define M_INDICATOR_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define M_INDICATOR_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define M_INDICATOR_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define M_INDICATOR_GetValue()           PORTCbits.RC2
#define M_INDICATOR_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define M_INDICATOR_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define M_INDICATOR_SetAnalogMode()  do { ANSELCbits.ANSC2 = 1; } while(0)
#define M_INDICATOR_SetDigitalMode() do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()    do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()   do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()   do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()         PORTCbits.RC3
#define RC3_SetDigitalInput()   do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()  do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetAnalogMode() do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()    do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()   do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()   do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()         PORTCbits.RC4
#define RC4_SetDigitalInput()   do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()  do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetAnalogMode() do { ANSELCbits.ANSC4 = 1; } while(0)
#define RC4_SetDigitalMode()do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()    do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()   do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()   do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()         PORTCbits.RC5
#define RC5_SetDigitalInput()   do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()  do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetAnalogMode() do { ANSELCbits.ANSC5 = 1; } while(0)
#define RC5_SetDigitalMode()do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()    do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()   do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()   do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()         PORTCbits.RC6
#define RC6_SetDigitalInput()   do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()  do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetAnalogMode() do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()    do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()   do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()   do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()         PORTCbits.RC7
#define RC7_SetDigitalInput()   do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()  do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetAnalogMode() do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set RD0 procedures
#define RD0_SetHigh()    do { LATDbits.LATD0 = 1; } while(0)
#define RD0_SetLow()   do { LATDbits.LATD0 = 0; } while(0)
#define RD0_Toggle()   do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define RD0_GetValue()         PORTDbits.RD0
#define RD0_SetDigitalInput()   do { TRISDbits.TRISD0 = 1; } while(0)
#define RD0_SetDigitalOutput()  do { TRISDbits.TRISD0 = 0; } while(0)
#define RD0_SetAnalogMode() do { ANSELDbits.ANSD0 = 1; } while(0)
#define RD0_SetDigitalMode()do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set RD1 procedures
#define RD1_SetHigh()    do { LATDbits.LATD1 = 1; } while(0)
#define RD1_SetLow()   do { LATDbits.LATD1 = 0; } while(0)
#define RD1_Toggle()   do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define RD1_GetValue()         PORTDbits.RD1
#define RD1_SetDigitalInput()   do { TRISDbits.TRISD1 = 1; } while(0)
#define RD1_SetDigitalOutput()  do { TRISDbits.TRISD1 = 0; } while(0)
#define RD1_SetAnalogMode() do { ANSELDbits.ANSD1 = 1; } while(0)
#define RD1_SetDigitalMode()do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set RD4 procedures
#define RD4_SetHigh()    do { LATDbits.LATD4 = 1; } while(0)
#define RD4_SetLow()   do { LATDbits.LATD4 = 0; } while(0)
#define RD4_Toggle()   do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define RD4_GetValue()         PORTDbits.RD4
#define RD4_SetDigitalInput()   do { TRISDbits.TRISD4 = 1; } while(0)
#define RD4_SetDigitalOutput()  do { TRISDbits.TRISD4 = 0; } while(0)
#define RD4_SetAnalogMode() do { ANSELDbits.ANSD4 = 1; } while(0)
#define RD4_SetDigitalMode()do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set RD6 procedures
#define RD6_SetHigh()    do { LATDbits.LATD6 = 1; } while(0)
#define RD6_SetLow()   do { LATDbits.LATD6 = 0; } while(0)
#define RD6_Toggle()   do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define RD6_GetValue()         PORTDbits.RD6
#define RD6_SetDigitalInput()   do { TRISDbits.TRISD6 = 1; } while(0)
#define RD6_SetDigitalOutput()  do { TRISDbits.TRISD6 = 0; } while(0)
#define RD6_SetAnalogMode() do { ANSELDbits.ANSD6 = 1; } while(0)
#define RD6_SetDigitalMode()do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set RD7 procedures
#define RD7_SetHigh()    do { LATDbits.LATD7 = 1; } while(0)
#define RD7_SetLow()   do { LATDbits.LATD7 = 0; } while(0)
#define RD7_Toggle()   do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define RD7_GetValue()         PORTDbits.RD7
#define RD7_SetDigitalInput()   do { TRISDbits.TRISD7 = 1; } while(0)
#define RD7_SetDigitalOutput()  do { TRISDbits.TRISD7 = 0; } while(0)
#define RD7_SetAnalogMode() do { ANSELDbits.ANSD7 = 1; } while(0)
#define RD7_SetDigitalMode()do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set LCM_E aliases
#define LCM_E_TRIS               TRISEbits.TRISE0
#define LCM_E_LAT                LATEbits.LATE0
#define LCM_E_PORT               PORTEbits.RE0
#define LCM_E_ANS                ANSELEbits.ANSE0
#define LCM_E_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define LCM_E_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define LCM_E_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define LCM_E_GetValue()           PORTEbits.RE0
#define LCM_E_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define LCM_E_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define LCM_E_SetAnalogMode()  do { ANSELEbits.ANSE0 = 1; } while(0)
#define LCM_E_SetDigitalMode() do { ANSELEbits.ANSE0 = 0; } while(0)

// get/set LCM_RS aliases
#define LCM_RS_TRIS               TRISEbits.TRISE2
#define LCM_RS_LAT                LATEbits.LATE2
#define LCM_RS_PORT               PORTEbits.RE2
#define LCM_RS_ANS                ANSELEbits.ANSE2
#define LCM_RS_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define LCM_RS_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define LCM_RS_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define LCM_RS_GetValue()           PORTEbits.RE2
#define LCM_RS_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define LCM_RS_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define LCM_RS_SetAnalogMode()  do { ANSELEbits.ANSE2 = 1; } while(0)
#define LCM_RS_SetDigitalMode() do { ANSELEbits.ANSE2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/
