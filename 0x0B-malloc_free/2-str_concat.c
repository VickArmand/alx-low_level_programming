#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, len = 0, j, k;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0')
		len++;

	while (s2[i] != '\0')
	{
		i++;
		len++;
	}
	len++;
	concat = malloc(sizeof(char) * len);

	if (concat == NULL)
		return (NULL);

	for (j = 0; s1[j] != '\0'; j++)
		concat[j] = s1[j];
	for (k = 0; s2[k] != '\0'; k++)
	{
		concat[j] = s2[k];
		j++;
	}
	concat[j] = '\0';

	return (concat);
}
