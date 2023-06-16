#include <stdio.h>

/**
 * main - prints all possible combinations of three-digit numbers
 * Return: success (0)
 */

int main(void)
{
	int num, letter, i;

	for (letter = 48; letter < 58; letter++)
	{
		for (num = letter + 1; num < 58; num++)
		{
			for (i = num + 1; i < 58; i++)
			{
				putchar(letter);
				putchar(num);
				putchar(i);
				if (!(letter == 55 && num == 56 && i == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
