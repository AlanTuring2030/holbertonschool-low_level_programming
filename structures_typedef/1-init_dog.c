#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initializes a struct dog variable
 * @d: Pointer to the struct dog variable to initialize
 * @name: Pointer to the dog's name
 * @age: Age of the dog
 * @owner: Pointer to the dog owner's name
 *
 * Description: This function initializes the fields of a structure
 * struct dog with the provided values of name, age and owner
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
