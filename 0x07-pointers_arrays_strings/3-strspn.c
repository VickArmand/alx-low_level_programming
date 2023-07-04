#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: char pointer
 * @accept: char pointer
 * Return: Returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int len = 0;

	while (s[i] != ' ')
	{
		if (s[i] == accept[i])
			len++;
		i++;
	}
	return (len);
}
