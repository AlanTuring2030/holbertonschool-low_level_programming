#include "main.h"
/**
 * factorial - Calculates the factorial of a number
 * @n: Number for which the factorial will be computed
 *
 * Return: The factorial of n
 *         If n is negative returns -1 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
