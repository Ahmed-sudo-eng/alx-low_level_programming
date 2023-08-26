#include "main.h"

/**
 * _isupper -  a function that checks for uppercase character
 * @c: a character to check
 *
 * Return: If c is uppercase (1), else (0)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
