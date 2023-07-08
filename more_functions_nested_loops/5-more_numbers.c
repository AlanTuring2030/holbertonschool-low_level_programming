#include "main.h"
/**
 * more_numbers - Prints an extended series of numbers
 *
 * Description: This function is in charge of printing a series of 14 numbers
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar('0' + j / 10);
			}
			_putchar('0' + j % 10);
		}
		i++;
		_putchar('\n');
	}
}
