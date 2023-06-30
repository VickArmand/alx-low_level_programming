#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: character pointer
 * Return: resulting pointer to string
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 97 && str[i] <= 122)
		str[i] -= 32;

	while (*(str + i) != '\0')
	{
		if ((str[i] == ' ' || str[i] == '\n' || str[i] == '.'
					|| str[i] == '\t') && (str[i + 1] >= 97 && str[i + 1] <= 122))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}
