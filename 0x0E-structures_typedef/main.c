#include "dog.h"

/**
 * main - prints a new instance of dog
 * Description: initialise a new dog
 * Return: always 0
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "babby";
	my_dog.age = 22;
	my_dog.owner = "balu";
	
	print_dog(&my_dog);

	return (0);
}

