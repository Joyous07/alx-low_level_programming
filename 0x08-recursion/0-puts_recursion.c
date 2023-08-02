#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Function that print a string, follow by a new line.
 * @s: Input value
 * Return: Always 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
