#include "main.h"
/**
 * _pow_recursion - Calculates the power of a number using recursion
 * @x: Base of the power
 * @y: Exponent of the power
 *
 * Return: The result of x raised to the power y
 *         If y is negative it returns -1 to indicate an error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
