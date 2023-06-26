#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - characters upper and lower case
 *
 * Return: 0
*/
int main(void)
{
char abcdario;
for (abcdario = 'a'; abcdario <= 'z'; abcdario++)
{
if (abcdario != 'e' && abcdario != 'q')
putchar(abcdario);
}
putchar('\n');
return (0);
}
