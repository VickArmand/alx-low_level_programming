#include "main.h"

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char.
 * @size: array size
 * @c: character
 * Return: address to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *temp = malloc(sizeof(c) * size);

	if (temp == NULL || size == 0)
		return (NULL);

	while (i < size)
	{
		temp[i] = c;
		i++;
	}
	return (temp);
}
