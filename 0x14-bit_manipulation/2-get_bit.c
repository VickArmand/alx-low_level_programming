#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: long int n
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int res = 0, i = 0;
	unsigned int len = 0, j = 0, rem, bit;

	i = 1;
	j = 0;
	while (n != 0)
	{
		rem = n & 1;
		res += (i * rem);
		n = n >> 1;
		i *= 10;
		len++;
	}
	i = 0;

	while (j <= index)
	{
		bit = res % 10;
		res = res / 10;
		j++;
	}
	return (bit);
}
