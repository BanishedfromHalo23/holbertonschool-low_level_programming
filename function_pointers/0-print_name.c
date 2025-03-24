#include "function_pointers.h"
/**
 * print_name - prints the name.
 * @name: name to print.
 * @f: function pointer.
 *
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
