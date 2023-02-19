#define PORTA *((volatile char*)0x3B)
#define PINA *((volatile char*)0x39)
#define DDRA *((char*)0x3A)
#define F_CPU 1000000UL
#include <util/delay.h>

void main()
{
	DDRA = 0xff;
	while(1)
	{
		for(int i =0; i<8; i++)
		{
			PORTA |= (1 << i);
			_delay_ms(300);
		}
		for(int i =0; i<8; i++)
		{
			PORTA &= ~(1 << i);
			_delay_ms(300);
		}

	}
}