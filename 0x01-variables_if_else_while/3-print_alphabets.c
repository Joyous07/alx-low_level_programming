#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function that return both lowercase and uppercase alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);
}
