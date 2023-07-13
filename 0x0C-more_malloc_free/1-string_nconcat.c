#include "main.h"

int _strlen(char *str);
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of s2 to be concatenated
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j, len1, len2, size;
	char *nconcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	size = len1 + n + 1;
	nconcat = malloc(sizeof(char) * size);

	if (nconcat == NULL)
		return (NULL);
	for (; i < len1; i++)
	{
		nconcat[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		nconcat[i] = s2[j];
		i++;
	}
	nconcat[i] = '\0';
	return (nconcat);
}

/**
 * _strlen - length of string
 * @str: string
 * Return: length
 */

int _strlen(char *str)
{
	if (*str != '\0')
		return (1 + _strlen(str + 1));
	return (0);
}
