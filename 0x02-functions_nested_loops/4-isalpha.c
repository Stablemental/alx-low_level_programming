#include "main.h"

/**
 * _isalpha -This is a function that checks for alphabetic characters
 *
 * @c: parameter to be printed
 *
 * Return: 1 if c is lowercase 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
