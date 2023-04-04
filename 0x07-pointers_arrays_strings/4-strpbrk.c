#include "main.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: parametre of the function
 * @accept: parametre of the function
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (k == 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
		return ('\0');
}
