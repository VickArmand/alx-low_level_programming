#include <stdio.h>

/**
 * main - prints all possible combinations of two-digit numbers
 * Return: success (0)
 */

int main(void)
{
	int num, letter;

	for (letter = 48; letter < 58; letter++)
	{
		for (num = letter + 1; num < 58; num++)
		{
			putchar(letter);
			putchar(num);
			if (!(letter == 56 && num == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
