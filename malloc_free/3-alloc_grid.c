#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a 2d array of integers.
 * @width: width of the array.
 * @height: height of the array.
 * Return: pointer to 2d array or NULL if failed.
 */

int **alloc_grid(int width, int height)
{
	int **x;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	x = malloc(sizeof(int *) * height);
	if (x == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		x[i] = malloc(sizeof(int) * width);
		if (x[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(x[i]);
			free(x);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			x[i][j] = 0;
	return (x);
}
