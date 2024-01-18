#include "search_algos.h"
/**
 * search - performs binary search if value to be found
 * is not first or last element in array
 * @array: is a pointer to the first element of the array to search in
 * @start: starting index
 * @end: final index
 * @value: is the value to search for
 * Return: index of value if found or -1 otherwise
 */
int search(int *array, size_t start, size_t end, int value)
{
	size_t mid = (start + end) / 2;

	if (array[mid - 1] == value)
		return (mid - 1);
	else if (start > end)
		return (-1);
	else if (array[mid - 1] < value)
	{
		print_array(array, start, end);
		return (search(array, mid + 1, end, value));
	}
	else if (array[mid - 1] > value)
	{
		print_array(array, start, end);
		return (search(array, start, mid - 1, value));
	}
	else
		return (-1);
}
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: Your function must return the index where value is located
 * You can assume that array will be sorted in ascending order
 * You can assume that value won’t appear more than once in array
 * If value is not present in array or if array is NULL,
 * your function must return -1
 * You must print the array being searched every time it changes.
 * (e.g. at the beginning and when you search a subarray)
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	else if (array[size - 1] == value)
		return (size - 1);
	else
		return (search(array, 0, size - 1, value));
}

/**
 * print_array- prints the array after each function call
 * @array: array
 * @start: starting index
 * @end: final index
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i = start;

	printf("Searching in array: ");
	for (; i <= end; i++)
	{
		if (i == end)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}
