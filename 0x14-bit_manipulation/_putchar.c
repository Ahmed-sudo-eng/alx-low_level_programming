#include "main.h"
#include <unistd.h>

/**
 * _putchar - write one  character to stdout
 * @c: character
 *
 * Return: Nothing
 */
void _putchar(int c)
{
	write(1, &c, 1);
}
