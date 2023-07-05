#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description:This program print numbers hexadecimales
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *number_hexadecimal = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(number_hexadecimal[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
