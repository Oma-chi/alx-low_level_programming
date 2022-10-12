#include "dog.h"

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *nmae, float age, char *owner);

/**
 * _strlen - finds the lenght of a string
 * @str: string to be manipulated
 * Return: lenght of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcpy - copies a string pointed to by source including the
 * terminating null byte to a buffer poined to by dest
 * @dest: the destination of copied string
 * @src: the source string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dpg
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggs;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggs = malloc(sizeof(dog_t));
	if (doggs == NULL)
		return (NULL);

	doggs->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggs->name == NULL)
	{
		free(doggs);
		return (NULL);
	}

	doggs->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggs->owner == NULL)
	{
		free(doggs->name);
		free(doggs);
		return (NULL);
	}

	doggs->name = _strcpy(doggs->name, name);
	doggs->age = age;
	doggs->owner = _strcpy(doggs->owner, owner);

	return (doggs);
}

