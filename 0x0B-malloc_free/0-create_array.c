#include "main.h"

/*
 * create_array - creates an array of chars and
 * intialise it with a specific char.
 * @size: size of the array
 *@c: char to insert
 * Return: NULL if size is 0 or finite, pointer to array if successful
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size <= 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;
}

