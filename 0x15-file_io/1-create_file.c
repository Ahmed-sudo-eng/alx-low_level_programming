#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - a function that creates a file
 * @filename: The file name
 * @text_content: a string to write to the file
 *
 * Return: (1) on Success, (-1) on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nb_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	nb_write = write(fd, text_content, strlen(text_content));
	if (nb_write == -1)
		return (-1);
	return (1);
}
