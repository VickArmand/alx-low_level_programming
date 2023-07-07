#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @src: string to be appended
 * @dest: destination char pointer
 * @n: number of bytes of src to be appended
 * Return: pointer to the dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
