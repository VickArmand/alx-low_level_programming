#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of commmand line arguments
 * @av: array of command line arguments
 * Return: char pointer
 */

char *argstostr(int ac, char **av)
{
	char *concat;
	int i, j, n = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
		n++;
	}

	concat = malloc(sizeof(char) * n);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[k] = av[i][j];
			k++;
		}
		concat[k] = '\n';
		k++;
	}
	concat[k] = '\0';
	return (concat);
}
