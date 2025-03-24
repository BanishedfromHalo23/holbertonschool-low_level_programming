#include "function_pointers.h"
/**
 * int_index - Searches for an integer inside of an array.
 * @array: array used.
 * @size: size of array.
 * @cmp: compares integers in arrays.
 * Return: index of first element otherwise -1 if no matches or if
 * size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || *cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}

	return (-1);
}
