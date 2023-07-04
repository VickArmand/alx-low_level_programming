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
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: char pointer
 * @accept: char pointer
 * Return:  pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	int len1 = _strlen(s), len2 = _strlen(accept);
	int res = len1, ispresent = 0;

	while (i < len2)
	{
		for (j = 0; j < len1; j++)
		{
			if (s[j] == accept[i])
			{
				ispresent = 1;
				res = j <= res ? j : res + 0;
			}
		}
		i++;
	}
	if (ispresent == 1)
		return (s + res);
	else
		return (NULL);
}
