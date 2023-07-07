#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: digit parameter
 * Return: 0 otherwise
 */

int _isdigit(int c)
{
	int num = '0', isnum = 0;

	while (num <= '9')
	{
		if (num == c)
		{
			isnum = 1;
			break;
		}
		num++;
	}
	return (isnum);
}
