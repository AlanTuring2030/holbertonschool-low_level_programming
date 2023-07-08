#include "main.h"
/**
 * print_rev - Prints a string backwards
 * @s: Pointer to the beginning of the string
 *
 * Return: Always (0)
 */
void print_rev(char *s)
{
	int length = 0, i;

	while (s[length] != '\0')
	{
		length++;
	}

	length--;

	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
