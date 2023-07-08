#include "main.h"
/**
 * print_triangle - Prints a triangle consisting of '#'
 * @size: Triangle size
 *
 * Description: This function prints a character triangle '#'
 */
void print_triangle(int size)
{
	int i, s, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (s = size; s > i; s--)
			{
				_putchar(' ');
			}
			for (n = 1; n <= i; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
