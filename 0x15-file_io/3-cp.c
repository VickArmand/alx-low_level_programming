#include "main.h"
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int fd1, fd2, len;
	char *buffer;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	else
	{
		buffer = malloc(sizeof(char) * 1024);
		fd1 = open(argv[1], O_RDONLY);
		fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (fd1 == -1 || buffer == NULL)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (fd2 == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		len = 1024;
		while (len == 1024)
		{
			len = read(fd1, buffer, 1024), write(fd2, buffer, 1024);
		}
		if (close(fd1) == -1)
		{
			dprintf(2, "Can't close fd %d\n", fd1);
			exit(100);
		}
		if (close(fd2) == -1)
		{
			dprintf(2, "Can't close fd %d\n", fd2);
			exit(100);
		}
	}
	return (0);
}
