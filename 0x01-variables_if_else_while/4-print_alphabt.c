#include <stdio.h>

/**
 * main - prints aphabet in lowercase
 *
 * Description: using the main function
 * prints aphabet in lowercase
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}

