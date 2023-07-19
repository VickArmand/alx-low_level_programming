#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: integer array
 * @size: array size
 * @cmp: pointer to the function to be used to compare values
 * Return: return 0 If no element matches, return -1 If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}
