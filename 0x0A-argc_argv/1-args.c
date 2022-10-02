#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of argument
 * @argc: argument count
 * @argv: arguement array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}

