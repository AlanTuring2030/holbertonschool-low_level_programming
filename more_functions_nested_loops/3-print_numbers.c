#include "main.h"
/**
 * print_numbers - Prints a series of numbers in a specified range
 *
 * Description: This function prints a sequence of numbers
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}

