#include "main.h"

/**
 * _realloc - reallocates a new menory using malloc and free
 * @new_size: new memory size to be allocated
 * @old_size: old size of initial malloc
 * @ptr: pointer to the earlier malloced memory
 * Return: pointer to the reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *copy, *relloc;
	unsigned int i;

	if (ptr != NULL)
		copy = ptr;
	else
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	relloc = malloc(new_size);
	if (relloc == NULL)
		return (0);
	for (i = 0; i < old_size || i < new_size; i++)
		*(relloc + 1) = copy[i];
	free(ptr);
	return (relloc);
}

