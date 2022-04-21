#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: pointer
 * @f: argument that is pointer
 * @char *: argument that is array
 * Return: No argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
