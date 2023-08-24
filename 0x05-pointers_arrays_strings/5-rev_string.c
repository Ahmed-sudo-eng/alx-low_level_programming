#include <stdio.h>
#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: a string to reverse
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i;
	int c;
	char r[10];


	i = 0;
	while (*(s + i) != '\0')
		i++;
	
	printf("string len: %d\n", i);
	i--;

	c = 0;
	while (c <= i)
	{
		*(r + c) = *(s + i);
		c++;
		i--;
	}
	

	c = 0;
	while (c <= 9)
	{
		*(s + c) = *(r + c);
		c++;
	}

}
