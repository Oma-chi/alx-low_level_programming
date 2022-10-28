#include "main.h"

/**
 * print_grid - a grid
 * @grid: adress
 * @wid: width
 * @heig: height
 * Return: nothing
 */
void print_grid(int **grid, int wid, int heig)
{
	int h = 0, w = 0;

	while (h < heig)
	{
		while (w < wid)
		{
			printf("%d", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}
/**
 * main - checks the code
 * Return: alaways 0
 */
int main(void)
{
	int **buffer;

	buffer = alloc_grid(6, 4);
	if (buffer == NULL)
	{
		return (1);
	}
	print_grid(buffer, 6, 4);
	printf("\n");
	return (0);
}

