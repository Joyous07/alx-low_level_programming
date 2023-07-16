#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function that returns lowercase alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
