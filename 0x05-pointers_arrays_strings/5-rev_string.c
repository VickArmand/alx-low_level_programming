#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	char temp;
	int len = _strlen(s), j;

	j = 0, len--;
	while (j < len)
	{
		temp = s[j];
		s[j] = s[len];
		s[len] = temp;
		j++;
		len--;
	}

}
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

