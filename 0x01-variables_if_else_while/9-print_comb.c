#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: success (0)
 */

int main(void)
{
	int letter = 0;

	while (letter < 10)
	{
		putchar(letter + 48);
		if (letter + 48 != 57)
		{
			putchar(',');
			putchar(' ');
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
