#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to be converted
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int z = 0;
	int neg = 0;
	int dig = 0;
	unsigned int conv = 0;

	while (s[z])
	{
		if (s[z] == '-')
		{
			neg++;
		}
		else if (s[z] >= '0' && s[z] <= '9')
		{
			conv = conv * 10 + s[z] - '0';
			dig = 1;
		}
		else if (dig == 1 && (s[z] < '0' || s[z] > '9'))
			break;
		z++;
	}
	if (neg % 2 == 0)
	{
		return (conv);
	}
	else
	{
		return (-conv);
	}
}
