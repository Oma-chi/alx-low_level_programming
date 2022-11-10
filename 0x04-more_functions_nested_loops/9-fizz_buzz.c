#include "main.h"
#include <stdio.h>

/**
 * fizzbuzz - prints 1 - 100 with multiples of 3 , 5 printed as fizz
 * and buff respectively and mutiples of both 3 and 5 printed as fizzbuzz
 * Return: nothing
 */
void fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("\n");
}

/**
 * main - checks code
 * Return: 0
 */
int main(void)
{
	fizzbuzz();
	return (0);
}

