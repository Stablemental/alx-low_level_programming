#include "main.h"
/**
 * print_rev - function that prints a string in reverse,
 * followed by a new line.
 *@s: parametre of the function
 *Return: nothing
*/

void print_rev(char *s)
{
	int j = 0;
	int i = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
