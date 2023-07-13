#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: number of bytes(size)
 * Return: array pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **newmem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	newmem = malloc(nmemb * size);

	if (newmem == NULL)
		return (NULL);
	return (newmem);
}
