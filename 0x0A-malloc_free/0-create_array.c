#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of specific chars
 * @size: the size of the array
 * @c: the character to initialize the array with
 * Return: a pointer to the intiialized array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}