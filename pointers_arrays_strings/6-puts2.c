#include "main.h"
/**
 * puts2 - Prints alternate characters of a string
 * @str: Pointer to the character string
 *
 * Description: This function prints to stdout the alternate characters from
 *              a string starting with the first character
 *              Does not print the trailing null character
 */
void puts2(char *str)
{
	int i = 0;
	int length = 0;
	char *ptr = str;

	while (*ptr)
	{
		length++;
		ptr++;
	}

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
