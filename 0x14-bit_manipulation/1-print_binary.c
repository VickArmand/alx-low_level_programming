#include "main.h"
#include <stdio.h>

void print_number(unsigned long int num, unsigned long int divisor);

/**
 * print_binary - prints the binary representation of a number
 * @n: the decimal number
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int rem, res, i;

	if (n == 0)
		_putchar('0');
	else
	{
		res = 0;
		i = 1;
		while (n != 0)
		{
			rem = n & 1;
			res += i * rem;
			n = n >> 1;
			i *= 10;
		}
		print_number(res, (i / 10));
	}
}

/**
 * print_number - prints the whole number
 * @num: number
 * @divisor: divisor
 * Return: void
 */

void print_number(unsigned long int num, unsigned long int divisor)
{
	int n;

	while (divisor > 0)
	{
		n = num / divisor;
		_putchar(n + '0');
		num %= divisor;
		divisor /= 10;
	}
}
