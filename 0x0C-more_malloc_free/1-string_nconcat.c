#include "main.h"

/**
 * string_nconcat - merges two string together
 * @s1: one string to be merged
 * @s2: second string
 * @n: number of char of s2 to be merged
 *
 * Return: a pointer to the merged string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 == "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	if (n > size2)
		n = size2;
	ptr = malloc(sizeof(char) * (size1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		p[i] = s1[i];
	for (; i < (size1 + n); i++)
		p[i] = s2[i - size1];
	p[i] = '\0';

	return (ptr);
}

