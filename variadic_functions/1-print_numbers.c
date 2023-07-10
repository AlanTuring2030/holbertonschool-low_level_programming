#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Print the numbers followed by a new line
 * @separator: The string to be printed between the numbers
 * @n: The number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int temp;

	i = 0;
	va_start(ap, n);

	/*Iterates all elements */
	while (i < n)
	{
		temp = va_arg(ap, int);
		printf("%d", temp);

	/*At the end does not print the ', ' and if separator is not NULL*/
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
