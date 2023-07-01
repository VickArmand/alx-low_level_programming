#include "main.h"

/**
 * print_number - prints an integer.
 * @n: number
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	
	x = n
	if (x / 10 != 0)
		print_number(x / 10);
	_putchar('0' + (x % 10));
}
