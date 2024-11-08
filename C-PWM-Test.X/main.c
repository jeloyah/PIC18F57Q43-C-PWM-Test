#include <xc.h>
#include "gpio.h"
#include "clock.h"
#include "pwm1.h"
#include "pwm2.h"
#include "pwm3.h"

void main(void) {
    
    /* System Clock Initialization */
	CLOCK_Initialize();
    
    /* Config PortA */
    PortA_Initialize();
    
    /* Config PortB */
    PortB_Initialize();

    /* Config PortC */
    PortC_Initialize();
    
    /* Config PortD */
    PortD_Initialize();
    
    /* Config PortE */
    PortE_Initialize();
    
    /* Config PortF */
    PortF_Initialize();
      
    /* PWM1 compare Initialization */
	PWM1_Initialize();
    
    /* PWM2 compare Initialization */
	PWM2_Initialize();
    
    /* PWM3 compare Initialization */
	PWM3_Initialize();
    
    
    while(1)
    {

     /* Check if RF0 = 0 */
     if ((PORTF&0x01) == 0x00)
     {
      /* Hard coded reset, since pin MCLR(RE3) is used by debugger */   
     RESET();
     }   
       
        
        
        
        
    } /* while */
    
    return;
} /* main */
