#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to the power
 * of y.
 * @x: variable.
 * @y: variable.
 * Return: value 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (_pow_recursion(x, y - 1) * x);
}
