#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the decimal number
 * @index: index is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > 63)
		return (-1);
	num = 1 << index;
	*n = *n & (~num);
	return (1);
}
