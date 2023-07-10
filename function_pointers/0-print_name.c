#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Function to pointers
 * @f: pointer to function
 * @name: pointer to char
 *
 * Description: Function that print a name
 */

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
	f(name);
}

