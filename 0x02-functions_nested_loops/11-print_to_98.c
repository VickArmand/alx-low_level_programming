#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{

	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
		}
	}

}
