#include "../../hardware_config.h"

unsigned long timeStamp = 0;

void __interrupt() isr(void) {
    
	if(TMR1IE && TMR1IF) {
	
		TMR1IF = 0;
        TMR1L = 0XF7;
		TMR1H = 0XFD;
		timeStamp++;
		return;
	}
}
