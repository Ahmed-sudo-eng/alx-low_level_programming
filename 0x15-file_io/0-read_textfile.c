#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - a function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: The file name
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print and 0 if failed
 */
int read_textfile(const char *filename, int letters)
{
	int fd;
	char *buf = (char *) malloc(letters);
	int nb_read;
	int nb_write;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	nb_read = read(fd, buf, letters);
	if (nb_read == -1)
		return (0);
	nb_write = write(STDOUT_FILENO, buf, letters);
	if (nb_write == -1)
		return (0);

	free(buf);
	close(fd);
	return (nb_read);
}
