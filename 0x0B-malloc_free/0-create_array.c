#include "main.h"

/**
 * create_array - creates an array of char and initalise it with a char
 * @size: size of the array
 * @c: char to insert
 * Return: NULL if size is 0 or finite, pointer to array if successful
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
		return (NULL);

	buffer = (char *) malloc(size * sizeof(char));

	if (buffer == NULL)
		return (NULL);

	else
	{
		position = 0;
		while (position < size)
		{
			*(buffer + position) = c;
			position++;
		}
		return (buffer);
	}
}

