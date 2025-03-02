#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase characters.
 * @c: variable given.
 *
 * Return: SUCCESS (1).
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
