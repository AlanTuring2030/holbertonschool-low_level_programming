#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - Creates an in-memory copy of a string
 * @str: Character string to be duplicated
 *
 * Description: This function returns a pointer to a new string that is a    * copy of the string 'str'. is a copy of the string 'str'
 *
 * Memory for the new string is obtained with malloc and can be freed with   * free
 *
 * Return: Returns NULL if 'str' is NULL or if not enough memory available
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	duplicate = (char *)malloc(strlen(str) + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);
	return (duplicate);
}
