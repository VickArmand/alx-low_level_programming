#include "main.h"
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{

	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			lower = 1;
		}
		return (lower);
	}
}
