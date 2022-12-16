#include "lists.h"
#include <string.h>

/**
 * main - checks code
 *
 * Return: always 0 on success
 */

int main(void)
{
	lists_t *head;
	lists_t *new;
	lists_t hello = {"hello", 5, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("erroe");
		return (1);
	}
	new->str = strdup("hello");
	new->len = 5;
	new->next = head;
	head = new;
	n = print_list(head);
	printf("%lu elemnt\n", n);
}

