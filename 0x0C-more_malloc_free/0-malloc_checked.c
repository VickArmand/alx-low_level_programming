#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *newmem;

	newmem = malloc(b);

	if (newmem == NULL)
		exit(98);
	return (newmem);
}
