#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i = 1, j, c;

	if (size <= 0)
		_putchar('\n');
	for (; i <= size; i++)
	{
		j = 1;

		for (; j <= (size - i); j++)
		{
			_putchar(' ');
		}
		for (c = 1; c <= i; c++)
			_putchar('#');
		_putchar('\n');
	}
}
