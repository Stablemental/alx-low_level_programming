#include "main.h"

/**
 * _islower - Function that checks for lowercase char
 *
 * @c: function to be printed
 *
 * Return: always 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 127)
		return (1);
	else
		return (0);
}
