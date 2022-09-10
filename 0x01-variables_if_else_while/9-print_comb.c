#include <stdio.h>

/**
 * main - prints all possible combination of single digit
 *
 * Description: using the main function
 * prints all possible combination of single digits
 * Return: 0
 */
int main(void)
{
int c;
for (c = 40; c <= 57; c++)
{
	putchar(c);
	if (c != 57)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);

