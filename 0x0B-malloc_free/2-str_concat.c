#include "main.h"
/**
 * _strlen - count array
 * @s: array of element
 * Return: 1
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * str_concat - returns a pointer to array
 * @s1: array one
 * @s2: array two
 * Return: pointer to array or NULLon failure
 */
char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = _strlen(s1) + _strlen(s2);
	dst = malloc((size + 1) * sizeof(char));

	if (dst == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		dst[i] = s1[i];
	for (j = 0; s2[j]; j++, i++)
		dst[i] = s2[j];
	dst[i] = '\0';
	return (dst);
}

