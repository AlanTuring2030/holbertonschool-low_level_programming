#include "main.h"
/**
 * print_diagonal - Prints a diagonal consisting of the character '\'
 *
 * @n: Number of times to print the '\' character on the diagonal
 *
 * Description: This function prints a diagonal '/'
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
