#include "function_pointer.h"

/**
 * print_name - a fuction that prints a name
 * @name: name to be printed
 * @f: pointer to the name being printed
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

