#include "main.h"
/**
 * *_memcpy - function that copies memory area
 * @dest: parametre of function
 * @src: parametre of function
 * @n: parametre of function
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i > j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
