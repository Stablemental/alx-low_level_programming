#include "main.h"

/**
 * _abs -  a function that computes the absolute value of an integer.
 * @a: parameter to be changed
 * Return: always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);

}