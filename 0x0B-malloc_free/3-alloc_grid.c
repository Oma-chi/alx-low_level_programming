#include "main.h"

/**
 * alloc_grid - returns a pointer to a two dimentional array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to an array
 */
int **alloc_grid(int width, int height)
{
	int num, x, y, i, **arr;

	if (width < 1 || height < 1)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (num = 0; num < i; num++)
				free(arr[num]);
			free(arr);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			arr[x][y] = 0;
	}
	return (arr);
}

