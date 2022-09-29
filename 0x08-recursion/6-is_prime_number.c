#include "main.h"

/**
 * is_divisible - checks if a num is divisible
 * @num: the number to be checked
 * @div: the divisor
 * Return: 0 if divisible oe 1 if not
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}

