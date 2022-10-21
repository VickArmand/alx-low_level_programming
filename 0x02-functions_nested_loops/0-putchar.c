#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char output[10] = "_putchar";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(output[i]);
	}
	_putchar('\n');
	return (0);
}
