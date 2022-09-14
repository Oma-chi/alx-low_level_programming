#include "main.h"

/**
 * _islower - functions should check for lowercase characters
 * @c: is the int that will be used for the argument of the function
 * Return: 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

