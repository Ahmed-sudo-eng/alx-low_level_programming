#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a dog
 * @name: first element
 * @age: second element
 * @owner: third element
 *
 * Description: a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif