#include "main.h"

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n == 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		for (; n >= 98; n--)
		{
			_putchar(n);
		}
	}

}
