#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 * @str: pointer given.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int len;
	int num;

	for (len = 0; str[len] != '\0'; len++)
		;

	for (num = 0; num <= len - 1; num += 2)
		_putchar(str[num]);
	_putchar('\n');
}
