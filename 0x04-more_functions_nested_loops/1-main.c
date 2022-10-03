#include "main.h"
#include <stdio.h>

/**
 * main - checks code
 * Return: 0 if success and 1 if not
 */
int main(void)
{
	char c;
	c = '0';
	printf("%c : %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c : %d\n", c, _isdigit(c));
	return (0);
}

