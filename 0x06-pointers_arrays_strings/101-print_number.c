#include "main.h"

/**
 * print_number - prints an integer.
 * @n: number
 */

void print_number(int n)
{
	unsigned int x = 1, y = n, res;

	if (n == 0)
		_putchar('0');
	if (n < 0)
	{
		_putchar ('-');
		y = -n;
	}
	while (x <= y)
	{
		x = x * 10;
	}
	x = x / 10;
	while (x >= 1)
	{
		res = y / x;
		_putchar('0' + res);
		y = y - (res * x);
		x = x / 10;
	}
}
