#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: character separator
 * @n: n is the number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list list;
		unsigned int i;

		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));
			if (i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(list);
	}
}
