#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 * @a: variable given.
 * @b: variable given.
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
