#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: integer array
 * @size: array size
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (size == 0 || array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
