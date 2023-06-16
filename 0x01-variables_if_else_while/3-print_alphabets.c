#include <stdio.h>

/**
 * main - prints alphabet in lowercase then uppercase
 * Return: success (0)
 */

int main(void)
{
	char letterlower = 'a', letterUpper = 'A';

	while (letterlower <= 'z') /* prints lowercase alphabet */
	{
		putchar(letterlower);
		letterlower++;
	}
	while (letterUpper <= 'Z') /* prints uppercase alphabet */
	{
		putchar(letterUpper);
		letterUpper++;
	}
	putchar('\n');
	return (0);
}
