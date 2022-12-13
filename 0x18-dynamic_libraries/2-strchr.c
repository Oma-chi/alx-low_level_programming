#include "main.h"

/**
 * _strchr - searches and returns ythe first occurence of a char c
 * @c: char to search for
 * @s: string to search through
 * Return: a pointer to the first occurrence of c
 */
char *_strchr(char *s, char c)
{
	int j = 0, i;

	while (s[j])
		j++;

	for (i = 0; i <= j; i++)
	{
		if (c == s[i])
		{
			s += i;
			return (s);
		}
	}
	return ('\0');
}

