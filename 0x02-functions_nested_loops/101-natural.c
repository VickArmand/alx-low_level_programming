#include "main.h"

/**
 * main -  Write a program that computes and prints the
 * sum of all the multiples of 3 or 5 below 1024 (excluded)
 * Return: 0 Always success
 */

int main(void)
{
	int i = 0, sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
