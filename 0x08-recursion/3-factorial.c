#include "main.h"

/**
 * factorial - return factorial of a given number
 * @n: the number to find the factorial of
 * Return: if n > 0 the factorial of n
 * if n < 0 1 to indicate an error
 */
int factorial(int n)
{
	int res = n;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	res *= factorial(n - 1);
	return (res);
}

