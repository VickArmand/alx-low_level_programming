#include "search_algos.h"
/**
 * linear_search - searches for a value in a sorted array of integers
 * using the linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: Your function must return the first index where value is located
 * If value is not present in array or if array is NULL,
 * your function must return -1
 * Every time you compare a value in the array to the value
 * you are searching, you have to print this value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
