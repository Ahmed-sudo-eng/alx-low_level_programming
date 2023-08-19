#include "main.h"

/**
 * _islower - checks for lower case caracter
 * @c: The caracter yo check
 *
 * Return: On success 1.
 * On error, 0 is returned
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
