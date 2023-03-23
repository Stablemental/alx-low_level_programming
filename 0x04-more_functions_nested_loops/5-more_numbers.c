#include "main.h"

/**
 * more_numbers -  function that prints 10 times the numbers, from 0 to 14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			_putchar(j + 48);

		for (k = 10 ; k <= 14 ; k++)
			{
				_putchar(1 + 48);
				_putchar(k % 10 + 48);
			}
	_putchar('\n');
	}
}
