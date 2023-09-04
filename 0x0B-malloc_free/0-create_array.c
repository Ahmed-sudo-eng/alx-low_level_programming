#include <stdlib.h>

/**
 * create_array - a funtion that creates an array of chars, and intializes it
 * with a specific char
 * @size: the array size
 * @c: char to fill the array with
 *
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return ('\0');
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
