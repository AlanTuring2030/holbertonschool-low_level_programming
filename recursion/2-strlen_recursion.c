#include "main.h"
/**
 * _strlen_recursion - Calculates the length of a string recursively
 * @s: Pointer to the string to calculate the length
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 1;

	if (*s == '\0')
	{
		return (0);
	}

	return (length += _strlen_recursion(s + 1));
}
