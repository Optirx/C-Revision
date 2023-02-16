#define PORTA *((volatile char*)0x3B)
#define PINA *((volatile char*)0x39)
#define DDRA *((char*)0x3A)
#define F_CPU 1000000UL
#include <util/delay.h>

int main(void)
{
  DDRA = 0xff;
	while(1)
	{
		PORTA|=1;
		
		_delay_ms(1000);
		PORTA&=~(1);
    
		_delay_ms(1000);
	}
}