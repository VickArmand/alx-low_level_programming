#include "main.h"

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	unsigned long a = 1, b = 2, c;
	int count = 0;

	printf("%lu, %lu, ", a, b);
	while (count < 96)
	{
		c = a + b;
		if (count == 95)
		{
			printf("%lu", c);
		}
		else
		{
			printf("%lu, ", c);
		}
		a = b;
		b = c;
		count++;
	}
	printf("\n");
	return (0);

}
