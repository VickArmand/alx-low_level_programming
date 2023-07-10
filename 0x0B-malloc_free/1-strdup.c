#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *temp;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}
	len++;

	temp = malloc(sizeof(char) * len);

	if (temp == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';

	return (temp);
}
