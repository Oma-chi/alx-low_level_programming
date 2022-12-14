#include "main.h"

/*
 * _strdup - returns a pointer to a newly allocated space
 * in memory which contains the copy of the string given as a
 * parameter.
 * Description: returns a pointer to a newly allocated space.
 * @str: string to be copied
 * Return: NULL in case of error pointr to alocated space
 */
char *_strdup(char *str)
{
	char *cpy;
	int index, len = 0;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		cpy[index] = str[index];
	cpy[len] = '\0';
	return (cpy);
}

