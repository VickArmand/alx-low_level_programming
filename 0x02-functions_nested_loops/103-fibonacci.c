#include "main.h"

/**
 * main - prints the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	long a = 1, b = 2, c, sum = 3;
	int count = 0;

	while (count < 49)
	{
		c = a + b;
		if (c <  4000000)
		{
			sum += c;
		}
		else
		{
			break;
		}
		a = b;
		b = c;
		count++;
	}
	printf("%li\n", sum);
	return (0);

}
