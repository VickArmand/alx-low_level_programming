#include "main.h"

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
	int i = 0, res;

	while (*(s + i) != '\0')
	{
		if (s[i] == accept[i] && s[i + 1] == accept[i + 1])
		{
			res = i;
			break;
		}
		i++;
	}
	if (res)
		return (s + res);
	else
		return (NULL);
}
