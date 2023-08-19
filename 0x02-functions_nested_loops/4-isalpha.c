#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: The caracter to check
 *
 * Return: 1 in Success and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
