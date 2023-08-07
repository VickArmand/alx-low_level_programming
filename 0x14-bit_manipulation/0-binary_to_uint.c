#include "main.h"

unsigned int _pow(int num, unsigned int superscript);
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 * if there is one or more chars in the string b that is not 0 or 1 b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bintoint = 0;
	int value, i, len = _strlen(b);

	if (b != NULL)
	{
		i = len - 1;
		while (i >= 0)
		{
			if (b[i] == '1' || b[i] == '0')
			{
				value = b[i] - '0';
				bintoint += _pow(2, (len - i - 1)) * value;
			}
			else
				return (0);
			i--;
		}
	}
	else
		return (0);
	return (bintoint);
}

/**
 * _pow - calculates the power
 * @num: integer
 * @superscript: integer
 * Return: resulting power
 */

unsigned int _pow(int num, unsigned int superscript)
{
	unsigned int i, res = 1;

	if (superscript == 0)
		return (1);
	else if (superscript == 1)
		return (num);
	i = 1;
	while (i <= superscript)
	{
		res *= num;
		i++;
	}
	return (res);
}

/**
 * _strlen - returns the length of a string.
 * @s: string to be used
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
