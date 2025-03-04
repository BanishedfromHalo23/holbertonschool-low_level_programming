#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - prints two strings.
 * @dest:pointer.
 * @src:pointer.
 * @n:pointer.
 * Return: value 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr)
		ptr++;

	while (n-- && *src)
		*ptr++ = *src++;

	*ptr = '\0';

	return (dest);
}
