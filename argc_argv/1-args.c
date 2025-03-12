#include <stdio.h>
#include "main.h"

/**
 * main - prints the num of arguments passed into it.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: ALways 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
