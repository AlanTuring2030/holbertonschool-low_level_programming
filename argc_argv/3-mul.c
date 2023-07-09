#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Program entry point
 * @argc: Number of arguments passed
 * @argv: Array containing the arguments
 *
 * Description: This program multiplies two integers passed
 * as arguments and displays the result
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);
	return (0);
}
