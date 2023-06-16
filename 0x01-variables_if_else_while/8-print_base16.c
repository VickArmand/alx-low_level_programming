#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: success (0)
 */

int main(void)
{
	char nums = 48, letter = 97;

	while (nums <= 57) /* prints 0 to 9 */
	{
		putchar(nums);
		nums++;
	}
	while (letter <= 102) /* prints a to f */
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
