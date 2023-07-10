#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Function to pointers
 * @cmp: pointer to function
 * @size: size to char
 * @array: pointer to int
 * Return: Always 0
 * Description: Function that search for an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if ((array != NULL) && (cmp != NULL) && (size > 0))
{
	for (i = 0; i < size; i++)
	{
	if ((cmp(array[i]) !=  0))
		return (i);
	}
}
return (-1);
}
