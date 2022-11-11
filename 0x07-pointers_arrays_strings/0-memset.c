#include "main.h"
#include <stdio.h>

/**
 * _memset - a fuunction that fills memory with a constant byte
 * @s: pointer to memory address
 * @b: char to replace
 * @n: number of byte to set in memory
 * Return: pointer to the memory set
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s, value = b;

	for (i = 0; i < n; i++)
		ptr[i] = value;
	return (ptr);
}

