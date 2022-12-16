#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct lists_s - singly linked list
 * @str: string - (mallocc'ed string)
 * @len: lenght of the string
 * @next: points to the next node
 * Description: singly list node structure
 */

typedef struct lists_s
{
	char *str;
	unsigned int len;
	struct lists_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */

