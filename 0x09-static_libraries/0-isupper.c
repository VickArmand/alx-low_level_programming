#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: integer value to be interpreted as a character
 * Return: 1 if c is uppercase 0 otherwise
 */

int _isupper(int c)
{
	int letter = 'A', isupper = 0;

	while (letter <= 'Z')
	{
		if (letter == c)
		{
			isupper = 1;
			break;
		}
		letter++;
	}
	return (isupper);
}
