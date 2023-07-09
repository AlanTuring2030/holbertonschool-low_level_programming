#include "main.h"
/**
 * is_prime_number - Checks if a number is prime
 * @n: Number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 *
 * is_prime_recursive - Recursive function to check prime number
 * @n: Number to check
 * @divisor: Current divisor to check
 */
int is_prime_recursive(int n, int divisor);

int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}

	return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - checks if a number is prime or not
 * @n: Number to check
 * @divisor: Current divisor to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_recursive(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	if (divisor == 2)
	{
		return (is_prime_recursive(n, 3));
	}

	return (is_prime_recursive(n, divisor + 2));
}


