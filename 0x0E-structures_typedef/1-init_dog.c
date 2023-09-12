#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a pointer
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit(EXIT_SUCCESS);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
