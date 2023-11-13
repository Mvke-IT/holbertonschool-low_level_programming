#include <stdio.h>
#include "dog.h"
/**
 * init_dog - write a function that initializes a variable of type struct dog
 * @d: struct pointer
 * @name: dog name
 * @age: dogs age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d==NULL)
	{
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
