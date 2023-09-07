#include <stdlib.h>

/**
 * _calloc - a function that allocatesmemory for an array using malloc
 * @nmemb: number of elements
 * @size: size of one element
 *
 * Return: a pointer to the allocated memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

