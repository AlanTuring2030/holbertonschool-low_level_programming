#include <stdio.h>
#include "main.h"
/**
 * main - Program entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of character strings containing the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
