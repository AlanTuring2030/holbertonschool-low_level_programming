#include "main.h"
/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to the beginning of the string
 *
 * Return: The length of the chain
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
