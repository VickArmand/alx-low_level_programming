#include "main.h"

/**
 * _check_palindrome - checks for palindrome in string
 * @s : string
 * @index1: integer
 * @index2: integer
 * Return: 1 if a string is a palindrome and 0 if not
 */
int _check_palindrome(char *s, int index1, int index2)
{
	if (*(s + index1) == *(s + index2))
	{
		if (index1 > index2 / 2)
			return (1);
		else
			return (_check_palindrome(s, index1 + 1, index2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to test
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s != '\0')
		return (_check_palindrome(s, 0, _strlen_recursion(s) - 1));
	return (0);
}

/**
 *_strlen_recursion - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
