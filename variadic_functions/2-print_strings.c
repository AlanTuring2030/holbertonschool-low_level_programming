#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints strings followed by a new line
 *
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *temp;
	unsigned int i;

	i = 0;
	va_start(ap, n);

	/*Iterates the arguments*/

	while (i < n)
	{
		temp = va_arg(ap, char*);

		/*If one of the strings is NULL it prints (nil)*/
		if (temp != NULL)
		{
			printf("%s", temp);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
