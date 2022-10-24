#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 1
 * followed by a new line.
 * Return: Always 0
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
