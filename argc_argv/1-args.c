#include <stdio.h>
#include "main.h"
/**
 * main - Program entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of character strings containing the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
