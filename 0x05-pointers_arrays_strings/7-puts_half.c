#include "main.h"

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
 * puts_half - prints half of a string, followed by a new line
 * @str : string
 */

void puts_half(char *str)
{
	int half, len = _strlen(str), i;

	if (len % 2 == 0)
	{
		half = len / 2;
	}
	else
	{
		half = len - ((len - 1) / 2);
	}

	for (i = half; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
