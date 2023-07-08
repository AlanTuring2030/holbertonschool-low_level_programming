#include "main.h"
/**
 * swap_int - exchanges the values of two integer variables
 * @a: pointer to the first variable
 * @b: pointer to the second variable
 *
 * Description: This program modifies the values a and b by other values
 */
void swap_int(int *a, int *b)
{
	int var = *a;
	*a = *b;
	*b = var;
}
