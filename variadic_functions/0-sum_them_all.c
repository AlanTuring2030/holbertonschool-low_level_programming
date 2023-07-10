#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of parameters
 *
 * Return: The sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	/* Initialize the variables */
	va_list ap;
	int temp;
	unsigned int i;
	int suma;

	/* Initialize position ap */
	va_start(ap, n);

	suma = 0;
	temp = 0;
	i = 0;

	/* If the number of argc is 0 return 0 */
	if (n == 0)
	{
		return (0);
	}

	/* Sum of the arguments */
	while (i < n)
	{
		temp = va_arg(ap, int);
		suma = suma + temp;
		i++;
	}
	va_end(ap);

	return (suma);
}
