#include "main.h"

/**
 * times_table - prints 9 times table
 */

void times_table(void)
{
	int num1 = 0, num2, result;

	while (num1 < 10)
	{
		num2 = 0;
		while (num2 < 10)
		{
			result = num1 * num2;
			if (num2 == 0)
			{
				_putchar((result % 10) + '0');
				_putchar(',');
			}
			else
			{
				if (result > 9)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
				}
				else if (result <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((result % 10) + '0');
				if (num2 != 9)
					_putchar(',');
			}
			num2++;
		}
		_putchar('\n');
		num1++;
	}
}
