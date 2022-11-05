#include "main.h"

/**
 * array_range - creates an array of integers with a given range
 * @min: minimumvalue
 * @max: maximum value
 * Return: a pointer to the array'
 */
int *array_range(int min, int max)
{
	int *ptr, i = 0, start = min;

	if (min > max)
		return (0);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (!ptr)
		return (NULL);
	while (i <= max - min)
		ptr[i++] = start++;
	return (ptr);
}

