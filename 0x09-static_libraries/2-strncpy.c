#include "main.h"

/**
 * _strncpy - copies a string
 * @src: string to be appended
 * @dest: destination char pointer
 * @n: number of bytes of src to be appended
 * Return: pointer to the dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}


