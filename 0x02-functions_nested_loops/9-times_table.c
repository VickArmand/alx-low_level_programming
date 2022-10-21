#include "main.h"

void times_table(void)
{
	int i, j, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = i * j;
			if (j == 9)
			{
				_putchar(n + '0');
				_putchar(' ');
			}
			else
			{
				_putchar(n + '0');
				_putchar(' ');

			}
		}
		_putchar('\n');
	}
}
