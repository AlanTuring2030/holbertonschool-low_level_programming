#include "main.h"
/**
 * puts_half - Prints half of a string
 * @str: Pointer to string
 *
 * Description: This function prints out half of a string rounding down if
 *              the string length is odd
 */
void puts_half(char *str)
{
	int length = 0, position;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		position = length / 2;
	}
	else
	{
		position = ((length + 1) / 2);
	}

	while (str[position] != '\0')
	{
		_putchar(str[position]);
		position++;
	}

	_putchar('\n');
}
