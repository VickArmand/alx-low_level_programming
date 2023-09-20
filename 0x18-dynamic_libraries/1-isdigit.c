#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9).
 *
 * @c: An input integer
 *
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	int isd = 0;
	int i = 0;

	for (; i <= 9; i++)
	{
		if (c == i)
		{
			isd = 1;
			break;
		}
	}
	return (isd);
}
