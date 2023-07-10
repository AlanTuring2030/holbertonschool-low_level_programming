#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints the details of a dog structure
 * @d: Pointer to the structure dog
 *
 * Description: Prints the name, age and owner of a dog
 *
 * If any of the fields in the structure is NULL,
 * it prints "(nil)" instead
 *
 * If d is NULL does not print anything
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		printf("Age: %f\n", d->age);

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
