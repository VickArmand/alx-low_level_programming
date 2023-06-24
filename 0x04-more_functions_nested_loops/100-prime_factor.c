#include "main.h"
#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0
 */

int main(void)
{
	unsigned long num = 612852475143, i = 0;

	for (; i * i <= num; i++)
	{
		if (num % (i * i) == 0)
			printf("%lu ", i);
	}
	return (0);
}
