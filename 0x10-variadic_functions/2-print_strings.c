#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: character separator
 * @n: n is the number of integers passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list list;
		unsigned int i;
		char *string;

		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			string = va_arg(list, char *);

			if (string == NULL)
				printf("(nil)");
			else
				printf("%s", string);
			if (i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(list);
	}
}
