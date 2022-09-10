#include <stdio.h>

/**
 * main - prints aphabet in lower and uppercase
 *
 * Description: using the main function
 * this function prints alphabet in lower and upper case
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}

