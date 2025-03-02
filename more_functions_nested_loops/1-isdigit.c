#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit.
 * @c: variable given.
 *
 * Return: SUCCESS 0.
 */
int _isdigit(int c);

int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}
