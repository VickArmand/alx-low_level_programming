#include <stdio.h>

/**
 * main - prints single digit numbers of base 10
 * Return: success (0)
 */

int main(void)
{
	char letter = 48;

	while (letter < 58)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
