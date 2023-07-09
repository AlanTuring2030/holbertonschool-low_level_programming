#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints elements of an array of integers
 * @a: Pointer to the integer array
 * @n: Number of elements to print
 *
 * Description: This function prints the first n elements of the array a
 * separated by commas and spaces
 */
void print_array(int *a, int n)
{
	int i = 1;

	if (n > 0)
	{
		printf("%d", a[0]);

		while (i < n)
		{
			printf(", %d", a[i]);
			i++;
		}
	}
	printf("\n");
}
