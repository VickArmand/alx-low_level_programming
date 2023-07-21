#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything, followed by a new line
 * @format: is a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *string;
	int i = 0;
	va_list list;

	va_start(list, format);
	while ((format != NULL) && (format[i] != '\0'))
	{
		switch (format[i])
		{
			case ('c'):
				printf("%c", va_arg(list, int));
				break;
			case ('i'):
				printf("%d", va_arg(list, int));
				break;
			case ('f'):
				printf("%f", va_arg(list, double));
				break;
			case ('s'):
				string = va_arg(list, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
