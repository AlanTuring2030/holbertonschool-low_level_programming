#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character
 * @ap: List of arguments
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - Prints an integer
 * @ap:  List of arguments
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - Prints a float
 * @ap: List of arguments
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - print a string of characters
 * @ap: first parameter
 */
void print_string(va_list ap)
{
	char *letter;

	letter = va_arg(ap, char *);

	if (letter == NULL)
	{
		letter = "(nil)";
	}
	printf("%s", letter);
}

/**
 * print_all - Prints any type of data according to the
 * specified format
 * @format: List of types of arguments
 */
void print_all(const char * const format, ...)
{
	print_t prints[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	unsigned int i, j;
	va_list ap;
	char *separator;

	i = 0;
	j = 0;
	separator = "";
	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;

		while (prints[j].p)
		{
			if (format[i] == *prints[j].p)
			{
				printf("%s", separator);
				prints[j].f(ap);
				separator = ", ";												}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
