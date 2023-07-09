#include "main.h"
/**
 * _strcpy - Copies a character string
 * @dest: Pointer to the destination where the string will be copied to
 * @src: Pointer to the source string
 *
 * Description: This function copies the string pointed to by src
 * in the buffer pointed to by dest including the null character at the end
 *
 * Return: Pointer to the destination of the copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (temp);
}
