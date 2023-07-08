#include "main.h"
/**
 * print_line - Prints a line consisting of the character '_'
 *
 * @n: Number of times to print the character '_'
 *
 * Description: This function prints a line consisting of the character '_'
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
