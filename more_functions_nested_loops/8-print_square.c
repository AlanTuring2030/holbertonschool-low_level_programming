#include "main.h"
/**
 * print_square - Prints a square of given size
 * @size: Size of the square
 *
 * Description: This function prints a square with character #
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
