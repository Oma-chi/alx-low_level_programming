#inckude "main.h"

/**
 * swap_int - a function that swaps the value of 2 integers
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

