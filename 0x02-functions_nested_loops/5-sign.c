#include "main.h"
/**
 * print_sign - function that prints nembers sign
 *
 * @n: parametre to be printed
 *
 * Return: Either 0 or 1 or -1
 */
int print_sign(int n)
{
	if (n < '0')
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}	
}
