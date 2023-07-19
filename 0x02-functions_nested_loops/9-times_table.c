#include "main.h"

/**
 * times_table - check description
 * Description: It prints 9 times table starting with 0
 * Return: Nothing.
 */

void times_table(void)
{
	int m, n, o;
	
	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			o = m * n;
			if ((o / 10) == 0)
			{
				if (n != 0)
					_putchar(' ');
				_putchar(o + '0');

				if (n == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((o / 10) + '0');
				_putchar((o % 10) + '0');
				if (n == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
