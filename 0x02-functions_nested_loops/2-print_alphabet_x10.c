#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char letter;

	while (times < 10)
	{
		letter = 97;
		while (letter < 123)
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
		times++;
	}
}
