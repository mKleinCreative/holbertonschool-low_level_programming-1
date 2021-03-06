#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - develop a multidimensional array
 * @width: the width of the array
 * @height: the height of the array
 * Return: a double pointer to a multidimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **mda;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	mda = malloc(sizeof(*mda) * height);
	if (mda == NULL)
	{
		free(mda);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		mda[i] = malloc(sizeof(**mda) * width);
		if (mda[i] == NULL)
		{
			for (; i >= 0; i--)
				free(mda[i]);
			free(mda);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			mda[i][j] = 0;
		}
	}
	return (mda);
}
