#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: An input integer
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\');
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
