#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - printing the alphabet in lower case.
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	_putchar('\n');
}



