#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Function to pointers
 * @action: pointer to function
 * @size: size to char
 * @array: pointer to int
 *
 * Description: Function that executes a function parameter of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if ((array != NULL) && (action != NULL))
{
for (i = 0; i < size; i++)
{
if (array[i] >= 0)
	action(array[i]);
}
}
}
