#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename
 * @letters: number of letters to be read and written
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int bytes_written, bytes_read;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes_read = read(fd, buf, letters);
	bytes_written = write(1, buf, bytes_read);
	if (bytes_read == -1 || bytes_written == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (bytes_written);
}
