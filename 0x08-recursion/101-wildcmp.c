#include "main.h"

/**
 * cmpstr - compares s1 and s2 if there is a wildcard
 * @s1: string one
 * @s2: string two
 * @index: integer
 * Return: integer
 */

int cmpstr(char *s1, char *s2, int index)
{
	if (*(s1) == '\0' && *(s2) == '\0')
		return (1);
	else if (*s1 == *s2)
	{
		return (cmpstr(s1 + 1, s2 + 1, index + 1));
	}
	else if (*s2 == '*')
	{
		return (cmpstr(s1, s2 + 1, index));
	}
	else if (*s1 == '\0' && *s2 == '*')
	{
		return (cmpstr(s1, s2 + 1, index));
	}
	return (cmpstr(s1, s2 + 1, index));
}

/**
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0
 * @s1: string one
 * @s2: string two
 * Return: 1 if the strings can be considered identical,
 * otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	int index = 0;

	if (*(s1) == '\0' && *(s2) == '\0')
		return (1);
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (cmpstr(s1 + 1, s2 + 1, index + 1));
	}
	else
		return (0);
}
