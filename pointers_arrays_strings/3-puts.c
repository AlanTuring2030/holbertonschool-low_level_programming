#include "main.h"
/**
 * _puts - Prints a string followed by a new line
 * @str: Pointer to the beginning of the string
 *
 * Description: Returns a string with 'puts'
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
