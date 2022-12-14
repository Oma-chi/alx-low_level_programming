#include "main.h"

/**
 * _memcpy - copys nbytes from one location to another
 * @dest: destination memory
 * @src: src memory
 * @n: number of bytes to copy
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

