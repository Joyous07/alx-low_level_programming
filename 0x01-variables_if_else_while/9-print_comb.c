#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++n;
	}
	putchar('\n');
	return (0);
}
