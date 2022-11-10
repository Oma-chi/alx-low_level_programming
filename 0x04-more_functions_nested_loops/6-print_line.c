#include "main.h"

/**
 * print_line - prints char _ n number of times
 * @n: number of times _ will be printed 
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

