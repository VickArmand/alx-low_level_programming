#include "main.h"

/**
 * _atoi -  convert a string to an integer.
 * @s: string
 * Return: integer
 */
int issignpresent(char *s);
int indexofsign(char *s);
int _finalintindex(char *s, int start);

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign, index, multiplier = 1, i;

	if (issignpresent(s) == -1)
	{
		sign = -1;
		index = indexofsign(s) + 1;
	}
	else
	{
		sign = 1;
		index = 0;
	}
	i = _finalintindex(s, index) - 1;

	while (i >= index)
	{
		int digit = s[i] - '0';

		num += digit * multiplier;
		multiplier *= 10;
		i--;
	}
	num *= sign;
	return (num);

}

/**
 * _finalintindex - returns the length of a string.
 * @s: string to be used
 * @start: starting index
 * Return: length of string
 */

int _finalintindex(char *s, int start)
{
	int final = start;

	while (s[final] != '\0')
	{
		if (s[final] > 47 && s[final] < 58)
			final++;
		else
			break;
	}

	return (final);
}

/**
 * indexofsign - checks for the index where there
 * is a sign followed by a digit
 * @s: string to be used
 * Return: 0 if not present 1 if present
 */

int indexofsign(char *s)
{
	int i = 0, index;

	while (s[i] != '\0')
	{
		if ((s[i] == '-' || s[i] == ' ')
				&& (s[i + 1] > 47 && s[i + 1] < 58))
		{
			index = i;
			break;
		}
		i++;
	}
	return (index);
}

/**
 * issignpresent - checks for a sign folowed by a digit in the string
 * @s: string to be used
 * Return: 0 if not present 1 if present
 */

int issignpresent(char *s)
{
	int i = 0, ispresent = 0;

	while (s[i] != '\0')
	{
		if ((s[i] == '+' || s[i] == '-' || s[i] == ' ')
				&& (s[i + 1] > 47 && s[i + 1] < 58))
		{
			ispresent = s[i] == '-' ? -1 : 1;
			break;
		}
		i++;
	}
	return (ispresent);
}
