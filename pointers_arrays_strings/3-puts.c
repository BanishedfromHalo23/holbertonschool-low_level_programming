#include "main.h"
#include <string.h>

/**
 * _puts - prints the string.
 *
 * @str: pointer.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
