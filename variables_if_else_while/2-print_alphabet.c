#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print character
 *
 * Return: zero
 */

int main(void)
{
char abcdario;
for (abcdario = 'a'; abcdario <= 'z'; abcdario++)
{
putchar(abcdario);
}
putchar('\n');
return (0);
}
