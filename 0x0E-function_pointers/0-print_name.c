#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: the function pointer that points to the function to be used
 * Return: No Value
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		printf("\n");
		return;
	}
	f(name);
}