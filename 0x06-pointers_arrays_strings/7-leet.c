#include "main.h"

/**
 * leet - encodes a string into 133
 * @s: string to encode
 * Return: address of s
 */
char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlT";
	char b[] = "4433007711";

	for (j = 0; j <= 9; j++)
	{
		if (a[j] == *(s + i))
			*(s + i) = b[j];
	}
	return (s);
}

