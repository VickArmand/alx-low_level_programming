#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to be used
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: char pointer
 * @accept: char pointer
 * Return: Returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int len = _strlen(s), j = _strlen(accept) - 1, i;
	unsigned int prefixlen = 0;

	while (j >= 0)
	{
		i = len % 2 == 0 ? len / 2 : (len - 1) / 2;
		i--;
		for (; i >= 0; i--)
		{
			if (s[i] == accept[j])
				prefixlen++;
		}
		j--;
	}
	return (prefixlen);
}
