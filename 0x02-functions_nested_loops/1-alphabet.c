#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 */

void print_alphabet(void)
{
	char letter = 97;

	while (letter < 123)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
