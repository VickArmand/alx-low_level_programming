#include "main.h"
#include <stdio.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: number of bytes(size)
 * Return: array pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **newmem;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	newmem = malloc(nmemb * size);

	if (newmem == NULL)
		return (NULL);
	for (; i < size; i++)
		*((char *)newmem + i) = 0;
	return (newmem);
}
