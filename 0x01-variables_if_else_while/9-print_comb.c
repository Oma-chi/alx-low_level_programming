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
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
	if (c != '9')
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);

