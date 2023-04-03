#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 * @s: parametre of the function
 * @c: parametre of the function
 * Return: s otherwise 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

		return (0);
}
