#include "main.h"

/**
 * main - prints the number of passed arguments
 * @argc: number of command line arguments
 * @argv: array of pointers to command line arguments
 * Return: 0 (Always success)
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
