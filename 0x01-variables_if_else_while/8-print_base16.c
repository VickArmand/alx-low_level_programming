#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{
	int dec;
	char low;

	for (dec = '0'; dec <= '9'; dec++)
		putchar(dec);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);

}
