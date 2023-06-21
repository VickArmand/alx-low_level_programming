#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: an integer
 */

void print_to_98(int n)
{
	while (n < 99)
	{
		if (n == 98)
		{
			printf("%d\n", n);
		}
		else
			printf("%d, ", n);
		n++;
	}
	while (n > 97)
	{
		if (n == 98)
		{
			printf("%d\n", n);
		}
		else
			printf("%d, ", n);
		n--;
	}
}
