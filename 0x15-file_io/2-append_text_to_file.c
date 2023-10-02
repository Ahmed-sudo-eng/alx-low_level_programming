#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - a function that appends rext at the end of a file
 * @filename: The file name
 * @text_content: string to add at the end of a file
 *
 * Return: 1 on Success and -1 on Failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nb_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	nb_write = write(fd, text_content, strlen(text_content));
	if (nb_write == -1)
		return (-1);
	close(fd);

	return (1);
}
