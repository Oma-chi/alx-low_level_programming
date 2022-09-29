#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - find the natural square root of a num
 * @num: number to find the sqyare root of
 * @root: the root to be tested
 * Return: -1 for numbers without root and root for numbers
 *with root
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural root of a number
 * @n:the number to return the natural root of
 * Return: the natural root or -1 if n doesnt have a root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}

