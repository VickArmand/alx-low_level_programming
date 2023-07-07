#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src
 * to memory area dest
 * @src: source character pointer
 * @dest: destination char pointer
 * @n: number of bytes
 * Return: Returns a pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
