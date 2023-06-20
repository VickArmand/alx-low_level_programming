#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: value to compute the absolute
 * Return: absolute value
 */

int _abs(int n)
{
	int result;

	if (n < 0)
	{
		result = n * -1;
	}
	else
	{
		result = n;
	}
	return (result);
}
