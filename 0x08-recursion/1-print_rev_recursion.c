#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Function that prints a string in the reverse.
 * @s: The string to be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
