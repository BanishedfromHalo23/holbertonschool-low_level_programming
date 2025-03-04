#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string.
 * @s: variable given.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char temp;
	int len1, len2, idx;

	for (len1 = 0; s[len1] != '\0'; len1++)
		;

	len2 = len1 - 1;

	for (idx = 0; idx < len1 / 2; idx++)
	{
		temp = s[idx];
		s[idx] = s[len2];
		s[len2--] = temp;
	}
}
