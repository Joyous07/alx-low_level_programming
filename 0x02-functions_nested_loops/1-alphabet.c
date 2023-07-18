#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Entry point
 *
 * Return:0
 */

void print_alphabet(void)
{
	char j = 'a';

	while (j <= 'z')
	{
		_putchar(j);
		j++;
	}
	_putchar('\n');

}
