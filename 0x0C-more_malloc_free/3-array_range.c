#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min index
 * @max: max index
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *new_arr, size = max - min + 1, i;

	if (min > max)
		return (NULL);
	new_arr = malloc(sizeof(int) * size);
	if (new_arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		new_arr[i] = min;
		min++;
	}

	return (new_arr);

}
