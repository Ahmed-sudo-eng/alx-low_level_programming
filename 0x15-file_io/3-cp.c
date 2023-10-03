#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - a program that copies the content of a file to another file
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: (0) on Success
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	int close_s;
	int read_s;
	int write_s;
	int buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Opening files */
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	/* copying fd1 to fd2 */
	read_s = -1;
	while (read_s != 0)
	{
		read_s = read(fd1, buf, 1);
		if (fd1 == -1 || read_s == -1)
		{
			dprintf(2 , "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write_s = write(fd2, buf, 1);
		if (fd2 == -1 || write_s == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	/* Closing files */
	close_s = close(fd1);
	if (close_s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	close_s = close(fd2);
	if (close_s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}

	return (0);
}
