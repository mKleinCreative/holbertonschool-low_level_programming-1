#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argc;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
