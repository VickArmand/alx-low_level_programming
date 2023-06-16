#include <stdio.h>

/**
 * main - prints alphabet in lowercase excluding q and e
 * Return: success (0)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if ((letter != 'q') && (letter != 'e'))
			putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
