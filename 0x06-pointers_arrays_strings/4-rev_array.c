#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n)
	{
		if (i < (n / 2))
		{
			temp = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = temp;
		}
		else
		{
			break;
		}
		i++;
	}
}
