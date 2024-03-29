#include "main.h"

/**
 * main - prints the sum of numbers passed through command line arguments
 * @argc: number of command line arguments
 * @argv: array of pointers to command line arguments
 * Return: 0 (Always success)
 */

int main(int argc, char **argv)
{
	int sum = 0, i, j;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		i = 1;
		for (; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

