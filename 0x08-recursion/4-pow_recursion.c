#inlude "main.h"

/**
 * _pow_recursion - returns x raised to the powr of y
 * @x: number to be raised
 * @y: the power
 * Return:the value of x to the pow of y
 */
int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	res *= _pow_recursion(x, y - 1);
	return (res);
}

