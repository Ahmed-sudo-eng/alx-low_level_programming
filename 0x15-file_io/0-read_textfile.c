#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

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

	fd = open(filename, O_RDONLY);
	read(fd, buf, letters);
	write(STDOUT_FILENO, buf, letters);

	free(buf);
	close(fd);
	return (letters);
}
