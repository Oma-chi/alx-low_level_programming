#include "unistd.h"

/**
 * _putchar - print a character to stdout
 * @c: the character to output
 * Return: on success 1,
 * on error -1 is returned and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

