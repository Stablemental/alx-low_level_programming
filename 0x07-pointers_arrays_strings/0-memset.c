#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte.
 * @s: parametre of the function
 * @b: parametre of the function
 * @n: parametre of the function
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
