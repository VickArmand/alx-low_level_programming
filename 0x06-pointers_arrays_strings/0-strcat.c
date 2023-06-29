#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @src: string to be appended
 * @dest: destination char pointer
 * Return: pointer to the dest string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	j = 0;
	while (*(src + j) != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
