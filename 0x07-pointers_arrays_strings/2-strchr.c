#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: char pointer
 * @c: char to be located
 * Return: pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int index = 0;

	while (*(s + index) != c)
	{
		index++;
	}
	if (s[index] != c)
		return (NULL);
	else
		return (s + index);
}
