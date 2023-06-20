#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to detect the sign of
 * Return: 1 if sign is positive 0 if 0 -1 if negative
 */

int print_sign(int n)
{
	int sign = 0;

	if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		sign = -1;
		_putchar('-');
	}
	else
	{
		sign = 0;
		_putchar('0');
	}
	return (sign);
}
