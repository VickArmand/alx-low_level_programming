#include "main.h"

/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */
void print_square(int size)
{

	int i;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++) 
		{
			_putchar('#');
		}	
		_putchar('\n');
	}
