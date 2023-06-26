#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print characters with putchar
 *
 * Return: zero
 */

int main(void)
{
char alfabeto;
for (alfabeto = 'a'; alfabeto <= 'z'; alfabeto++)
putchar(alfabeto);
for (alfabeto = 'A'; alfabeto <= 'Z'; alfabeto++)
putchar(alfabeto);
putchar('\n');
return (0);
}
