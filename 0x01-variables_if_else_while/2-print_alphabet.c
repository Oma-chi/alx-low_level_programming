#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 *
 * Description: using the main function 
 * print aphabeth in lower case
 * Return: 0
 */
int main(void)
{
char ch;
for (ch ='a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}

