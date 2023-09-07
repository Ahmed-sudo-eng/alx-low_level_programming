#include <stdlib.h>

/** _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: a pointer to the previously allocated memory
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_size: the size in bytes of the new memory block
 *
 * Return: a pointer to the new allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	pptr = malloc(ptr, new_size);
	pptr = ptr;
	free(ptr);
	return (pptr);
}
