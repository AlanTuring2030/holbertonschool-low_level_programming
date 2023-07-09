#include <stdio.h>
#include <stdlib.h>
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
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j = 0;
		char c;

		while ((c = argv[i][j]) != '\0')
		{
			if (c < '0' || c > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
