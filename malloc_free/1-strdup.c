#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: String to duplicate.
 * Return: NULL if NULL or insufficient memory available.
 */

char *_strdup(char *str)
{
	int i, j;
	char *x;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		;

	x = malloc(sizeof(char) * (j + 1));

	if (x == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		x[i] = str[i];

	return (x);
}
