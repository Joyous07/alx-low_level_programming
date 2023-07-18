#include "main.h"

/**
 * main - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char j = 'a';

	while (j <= 'z');
	{
		_putchar(j);
		j++;
		
	}
	_putchar('\n');
	return (0);
}
