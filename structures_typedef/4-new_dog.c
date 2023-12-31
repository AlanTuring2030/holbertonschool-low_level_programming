#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - New function
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: Always 0
 *
 * Description: Write a function that creates a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int z, lname, lowner;

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL || !(name) || !(owner))
	{
		free(new_dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	new_dog->name = malloc(lname + 1);
	new_dog->owner = malloc(lowner + 1);

	if (!(new_dog->name) || !(new_dog->owner))
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (z = 0; z < lname; z++)
		new_dog->name[z] = name[z];
	new_dog->name[z] = '\0';

	new_dog->age = age;

	for (z = 0; z < lowner; z++)
		new_dog->owner[z] = owner[z];
	new_dog->owner[z] = '\0';

	return (new_dog);
}
