#include "main.h"

/**
 * _puts_recursion - prints a sting folowed by a new line
 * @s: the sting to be printed
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

