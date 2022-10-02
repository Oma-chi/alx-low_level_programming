#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguement received
 * @argc: arguemnt count
 * @argv: argument to be passed
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc < 1)
	{
		return (1);
	}
	else
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	putchar(10);
	return (0);
}

