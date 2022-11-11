#include "main.h"

/**
 * _strspn - returns the lenght of a prefix substring
 * @s: string to be searched
 * @accept: substring to be measured
 */
unsigned int *_strspn(char *s, char *accept)
{
	unsigned int bytes;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else
				if (accept[i + 1] == '\0')
					return (bytes);
		}
		s++;
	}
	return (bytes);
}

