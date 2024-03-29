#include "main.h"

/**
 * jack_bauer - prints the 24 hr clock system
 */

void jack_bauer(void)
{
	int hours = 0, min;

	while (hours < 24)
	{
		min = 0;
		while (min < 60)
		{
			if (hours >= 0 && hours < 10)
			{
				_putchar('0');
				_putchar(hours + '0');
			}
			else
			{
				_putchar((hours / 10) + '0');
				_putchar((hours % 10) + '0');
			}
			_putchar(':');
			if (min >= 0 && min < 10)
			{
				_putchar('0');
				_putchar(min + '0');
			}
			else
			{
				_putchar((min / 10) + '0');
				_putchar((min % 10) + '0');
			}
			_putchar('\n');
			min++;
		}
		hours++;
	}

}
