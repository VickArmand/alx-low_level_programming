#include "main.h"

/**
 * _isalpha- checks for uppercase characters and lowercase
 * @c: character to check whether it is uppercase, lowercase or not
 * Return: 1 for uppercase char, lowercase 0 otherwise
 */

int _isalpha(int c)
{
	int letter = 'A', isalpha = 0;

	while (letter <= 'z')
	{
		if (c == letter)
		{
			isalpha = 1;
			break;
		}
		letter++;
	}
	return (isalpha);
}
