#include "main.h"

/**
 * _strspn - returns the lenght of a prefix substring
 * @s: string to be searched
 * @accept: substring to be measured
 * Return: the number of bytes in the init segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j = 0,  k = 0;

	while (accept[j])
	{
		i = 0;
		while (s[i] != 32)
		{
			if (accept[j] == s[i])
				k++;
			i++;
		}
		j++;
	}
	return (k);
}

