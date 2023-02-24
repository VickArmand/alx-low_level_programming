#include "sort.h"
/**
 * bubble_sort - sorts an array
 * @array : array to be sorted
 * @size : size of array to be sorted
*/
void bubble_sort(int *array, size_t size)
{
	int i = 0, temp, j;

	if (size < 2 || array == NULL)
	{
		return;
	}
	for (; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
