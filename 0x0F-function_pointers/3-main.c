#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main function
 * @argc: number of command line arguments
 * @argv: array of pointers to command line arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (((strcmp(argv[2], "/") == 0) && (strcmp(argv[3], "0") == 0))
			|| ((strcmp(argv[2], "%") == 0) && (strcmp(argv[3], "0") == 0)))
	{
		printf("Error\n");
		exit(100);
	}
	if ((strcmp(argv[2], "+") != 0) || (strcmp(argv[2], "-") != 0)
			|| (strcmp(argv[2], "*") != 0) || (strcmp(argv[2], "/") != 0)
			|| (strcmp(argv[2], "%") != 0))
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", (*get_op_func(argv[2]))(num1, num2));
	return (0);
}
