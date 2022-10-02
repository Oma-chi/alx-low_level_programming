#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the multiplication of two numbers
 * @argc: arguement count
 * @argv: arguement array
 * Return: 0 on success and 1 on error
 */
int main(int argc, char *argv[])
{
	int mul = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}

