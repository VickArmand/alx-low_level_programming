#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a : int array
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int rows = 0, sum[] = {0, 0};

	for (; rows < size; rows++)
	{
		sum[0] += *(a + (rows * size) + rows);
	}
	rows = size - 1;
	for (; rows >= 0; rows--)
	{
		sum[1] += *(a + (rows * size) + (size - rows - 1));
	}
	printf("%d, ", sum[0]);
	printf("%d\n", sum[1]);
}
