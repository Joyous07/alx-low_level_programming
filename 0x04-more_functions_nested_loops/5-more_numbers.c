#include "main.h"

/**
 * more_numbers - checks for 10 times the number for 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 9; i <= 14; j++)
		{
			if (j >= 10)
			_putchar('i');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}