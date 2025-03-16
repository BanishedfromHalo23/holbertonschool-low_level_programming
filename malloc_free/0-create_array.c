#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of char, and
 * initializes it with a specific char.
 * @size: amount of arrays to create.
 * @c: dictates the char of arrays to create.
 * Return: NULL if 0, otherwise a pointer of the array.
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *x;

	if (size == 0)
		return (NULL);

	x = malloc(sizeof(char) * size);

	if (x == NULL)
		return (NULL);

	for (i = 0; x[i] == '\0'; i++)
		x[i] = c;

	return (x);
}
