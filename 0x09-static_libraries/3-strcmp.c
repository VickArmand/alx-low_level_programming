#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 0, if the s1 and s2 are equal, a negative value if
 * s1 is less than s2, a positive value if s1 is greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int cmpstr, i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			cmpstr = s1[i] - s2[i];
			break;
		}
		cmpstr = s1[i] - s2[i];
		i++;
	}
	return (cmpstr);
}
