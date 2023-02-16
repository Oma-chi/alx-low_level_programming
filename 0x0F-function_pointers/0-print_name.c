#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: name  to be printed
 * @f: function to print the name
 */

void print_name(char *name, void (*f)(char *name))
{
	if (name != NULL && f != NULL)
		f(name);
}

