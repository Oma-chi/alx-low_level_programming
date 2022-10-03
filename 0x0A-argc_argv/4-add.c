#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds two number
 * @argc: arguement count
 * @argv: arguement array
 * Return: 0 on success and 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

