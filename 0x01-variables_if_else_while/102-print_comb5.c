#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: success (0)
 */

int main(void)
{
	int num, letter, i, j;

	for (letter = 48; letter < 58; letter++)
	{
		for (num = 48; num < 58; num++)
		{
			for (i = letter; i < 58; i++)
			{
				for (j = num + 1; j < 58; j++)
				{
					putchar(letter);
					putchar(num);
					putchar(' ');
					putchar(i);
					putchar(j);
					if (!(letter == 57 && num == 56 && i == 57 && j == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
