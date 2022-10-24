#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9.
 * Do not print 2 and 4.
 * followed by a new line.
 * Return: Always 0
 */
void print_numbers(void)
{
	for (i = 0; i <= 9; i++)
	{
		if (i == 2)
		{
			continue;
		}
		else if (i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}

	_putchar('\n');
}
