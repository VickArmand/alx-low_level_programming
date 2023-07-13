#include "main.h"

/**
 * strtow - splits a string into words.
 * @str: string
 * Return: char pointer
 */

char **strtow(char *str)
{
	char **words;
	int numofwords = 0, i = 0;

	if (str == NULL || str == "")
		return (NULL);

	while (str[len] != '\0')
	{
		if (str[i] = ' ')
			numofwords++;
		len++;
	}
	numofwords++;
	len++;

	words = malloc(sizeof(char *) * numofwords);

	if (words == NULL)
		return (NULL);

	for (i = 0; i < numofwords; i++)
	{
		words[i] = malloc(sizeof(char) )
		for (j = 0; str[i] != '\0'; j++)
		{

		}
	}
	return ();
}
