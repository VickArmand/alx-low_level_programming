#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		i = 0;

		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
