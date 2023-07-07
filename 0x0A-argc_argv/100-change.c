#include "main.h"

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: number of command line arguments
 * @argv: array of pointers to command line arguments
 * Return: 0 (Always success)
 */

int main(int argc, char **argv)
{
	int min = 0, diff;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) < 0)
			printf("0\n");
		else
		{
			diff = atoi(argv[1]);
			while (diff != 0)
			{
				if (diff >= 25)
					diff -= 25;
				else if (diff >= 10)
					diff -= 10;
				else if (diff >= 5)
					diff -= 5;
				else if (diff >= 2)
					diff -= 2;
				else if (diff >= 1)
					diff -= 1;
				min++;
			}
			printf("%d\n", min);
		}
	}
	return (0);
}
