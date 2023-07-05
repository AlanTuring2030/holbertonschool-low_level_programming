#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description:This program print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *abcdario = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (abcdario[i] != 'e' && abcdario[i] != 'q')
		{
			putchar(abcdario[i]);
		}
	}
	putchar('\n');
	return (0);
}
