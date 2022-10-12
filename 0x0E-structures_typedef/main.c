#include "dog.h"

/**
 * main - prints a new instance of dog
 * Description: initialise a new dog
 * Return: always 0
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("poppy", 22, "lazy");
	printf("my name is %s and i am %f\n", my_dog->name, my_dog->age);
	free_dog(my_dog);

	return (0);
}

