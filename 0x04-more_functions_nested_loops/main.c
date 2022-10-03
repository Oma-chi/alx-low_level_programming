#include "main.h"
#include <stdio.h>

/**
 * main - checks my code
 * Return: 0
 */
int main(void)
{
	char c;
	c = 'a';
	printf("%c : %d\n", c, _isupper(c));
	c = 'A';
	printf("%c : %d\n", c, _isupper(c));
	return (0);
}

