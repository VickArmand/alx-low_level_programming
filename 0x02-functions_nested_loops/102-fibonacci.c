#include "main.h"

/**
 * main - computes and prints the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long a = 1, b = 2, c;
	int count = 0;

	printf("%li, %li, ", a, b);
	while (count < 48)
	{
		c = a + b;
		if (count == 47)
		{
			printf("%li", c);
		}
		else
		{
			printf("%li, ", c);
		}
		a = b;
		b = c;
		count++;
	}
	printf("\n");
	return (0);
}




