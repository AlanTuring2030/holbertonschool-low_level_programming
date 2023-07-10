#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - Sum of 2 integers
 * @a: First number
 * @b: Second number
 *
 * Return: Returns the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract 2 integers
 * @a: First number
 * @b: Second number
 *
 * Return: Returns the subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies 2 numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Return multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide 2 numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Return division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of 2 numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Returns the remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
