#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @n: a number to find absolute value
 *
 * Return: Absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}

