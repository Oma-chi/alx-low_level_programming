#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n element of an array of integers
 * @a: array of integers
 * @n: number of element of the array
 * Return: void
 */
void print_array(int *a, int *n)
{
	int j;

	for (j  = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
			printf(", ");
	}
	printf("\n");
}

