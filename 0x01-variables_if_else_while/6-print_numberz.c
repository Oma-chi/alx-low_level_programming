#include <stdio.h>

/**
 * main - prints number from 0 to 9
 *
 * Description: using the main function
 * prints numbers from 0 to 9
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}

