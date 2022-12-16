#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - a function that returns the nnumber of nodes in a list
 * @h: pointer to the list
 * Return: the number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

