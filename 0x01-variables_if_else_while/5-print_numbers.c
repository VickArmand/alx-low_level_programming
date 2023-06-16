#include <stdio.h>

/**
 * main - prints single digit numbers of base 10
 * Return: success (0)
 */

int main(void)
{
	int letter = 0;

	while (letter < 10)
	{
		putchar(letter + 48);
		letter++;
	}
	putchar('\n');
	return (0);
}
