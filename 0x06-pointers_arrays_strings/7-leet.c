#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: character pointer
 * Return: resulting pointer to string
 */

char *leet(char *str)
{
	int i = 0, j;
	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (*(str + i) != '\0')
	{
		for (j = 0; j < 11; j++)
		{
			if (str[i] == a[j])
				str[i] = b[j];
		}
		i++;
	}
	return (str);
}
