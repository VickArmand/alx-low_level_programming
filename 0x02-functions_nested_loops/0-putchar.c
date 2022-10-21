#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char output[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(output[i]);
	}
	_putchar('\n');
	return (0);
}
