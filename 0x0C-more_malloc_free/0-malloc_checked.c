#include "main.h"

/**
 * malloc_checked - a funnction that allocated memory
 * @b: number of memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

