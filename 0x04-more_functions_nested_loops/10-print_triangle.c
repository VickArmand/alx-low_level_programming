#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i = 0, j;

	for (; i <= size; i++)
	{
		j = size;

		for (; j >= 0; j--)
			_putchar('#');
		_putchar('\n');
	}
}
