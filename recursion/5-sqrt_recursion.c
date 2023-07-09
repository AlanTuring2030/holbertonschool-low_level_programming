#include "main.h"
/**
 * _sqrt_recursion - Calculates the square root of a number
 * @n: Number for which the square root is to be calculated
 *
 * Return: The integer square root of n
 *
 * sqrt_recursive - Auxiliary function for recursive calculation
 * @n: Number for which the square root is to be computed
 * @guess: Approximation value of the square root
 */
int sqrt_recursive(int n, int guess);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (sqrt_recursive(n, 1));
}

/**
 * sqrt_recursive - Function for recursive root calculation
 * @n: Number for which the square root is to be computed
 * @guess: Approximation value of the square root
 *
 * Return: The integer square root of n
 */
int sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}

	return (sqrt_recursive(n, guess + 1));
}
