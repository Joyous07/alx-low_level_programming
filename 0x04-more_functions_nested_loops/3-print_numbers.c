#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Checks for a digit 0 t0 9, followed by a new line
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
