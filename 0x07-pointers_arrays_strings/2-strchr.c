#include "main.h"

/**
 * _strchr - searches and returns ythe first occurence of a char c
 * @c: char to search for
 * @s: string to search through
 * Return: a pointer to the first occurrence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}

