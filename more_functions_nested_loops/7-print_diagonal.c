#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: variable given.
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int p;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (p = 0; p < i; p++)
				_putchar (' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
