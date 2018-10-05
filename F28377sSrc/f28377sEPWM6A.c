/* 28335_EPWM3A.C:  F28377S DSP EPWM peripherals interface.
 *
 *
 */

#include <f28377sCoecsl.h>
#include <f28377sePWM6A.h>


void initEPwm6A(void)
{
    EPwm6Regs.TBCTL.bit.CTRMODE = TB_COUNT_UP;      //set epwm3 to upcount mode
    EPwm6Regs.TBCTL.bit.FREE_SOFT = 0x2;  //Free Run
    EPwm6Regs.TBPRD = 2500; //set epwm3 counter  20KHz
    EPwm6Regs.TBCTL.bit.PHSEN = TB_DISABLE;    // Disable phase loading
    EPwm6Regs.TBPHS.bit.TBPHS = 0x0000;       // Phase is 0
    EPwm6Regs.TBCTR = 0x0000;                  // Clear counter

    EPwm6Regs.AQCTLA.bit.CAU = AQ_CLEAR;        //clear when counter = compareA
    EPwm6Regs.AQCTLA.bit.ZRO = AQ_SET;          //set when timer is 0
}

void setEPWM6A(float u) {
    float pwmCountMax = 2500.0;
    float pwmVal = 0;

    if (u >  10) u =  10;
    if (u < -10) u = -10;

    pwmVal = u * (pwmCountMax / 20.0) + pwmCountMax / 2.0;

    EPwm6Regs.CMPA.bit.CMPA = (int)pwmVal;

}

