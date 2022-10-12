#include"dog.h"

/**
 * init_dog - a fuction that initialise a struct dog
 * @d: the dog to be initialised
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the ownwe of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

