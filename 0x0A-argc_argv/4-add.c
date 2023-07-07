#include "main.h"

/**
 * main - prints the sum of numbers passed through command line arguments
 * @argc: number of command line arguments
 * @argv: array of pointers to command line arguments
 * Return: 0 (Always success)
 */

int main(int argc, char **argv)
{
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		while (argc--)
		{
			if (atoi(argv[argc]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[argc]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

