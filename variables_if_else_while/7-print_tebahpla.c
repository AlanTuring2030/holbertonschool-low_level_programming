#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description:This program print the alphabt in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
