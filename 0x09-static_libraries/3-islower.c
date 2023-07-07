#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to check whether it is lowercase or not
 * Return: 0 for not lowercase 1 for lowercase char
 */

int _islower(int c)
{
	int letter = 'a', islower = 0;

	while (letter <= 'z')
	{
		if (c == letter)
		{
			islower = 1;
			break;
		}
		letter++;
	}
	return (islower);
}
