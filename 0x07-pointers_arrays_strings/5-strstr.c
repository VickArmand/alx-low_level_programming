#include "main.h"

int _substr(char *haystack, char *needle);
/**
 * _strlen - returns the length of a string.
 * @s: string to be used
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: char pointer
 * @needle: char pointer
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, startindex;
	int len1 = _strlen(haystack), len2 = _strlen(needle);

	startindex = len1;
	while (i < len2)
	{
		for (j = 0; j < len1; j++)
		{
			if ((haystack[j] == needle[0]) &&
					(haystack[j + 1] == needle[1]))
			{
				startindex = j < startindex ? j : startindex;
				break;
			}
		}
		i++;
	}
	if (_substr(haystack, needle) == 0)
		return (NULL);
	else
		return (haystack + startindex);
}

/**
 * _substr - confirms if substring is present in haystack
 * @haystack: char pointer
 * @needle: char pointer
 * Return: 0 if not present 1 otherwise
 */

int _substr(char *haystack, char *needle)
{
	int i = 0, j, ispresent = 0;
	int len1 = _strlen(haystack), len2 = _strlen(needle);

	for (; i < len2; i++)
	{
		for (j = 0; j < len1; j++)
		{
			if ((haystack[j] == needle[i]) &&
					(haystack[j + 1] == needle[i + 1]))
				break;
		}
	}
	if (haystack[j] == needle[len2 - 1])
		ispresent = 1;
	return (ispresent);
}
