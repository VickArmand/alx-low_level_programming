#include <stdio.h>

/**
 * main - prints reversed alphabet in lowercase
 * Return: success (0)
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
