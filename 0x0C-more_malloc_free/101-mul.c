#include "main.h"
#include <stdio.h>

/**
 *
 *
 */

int main (int argc, char **argv)
{
	long int mul;

	if ((argc != 3) || (!atoi(argv[1])) || (!atoi(argv[1])))
	{
		printf("Error\n");
		exit(98);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%ld\n", mul);
	return (0);
}
