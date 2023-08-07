#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to be used
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
