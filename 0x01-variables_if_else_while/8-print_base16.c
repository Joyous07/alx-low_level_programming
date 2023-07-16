#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function that print all numbers to base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int alphabet;

	for (n = 0; n < 10; n++)
		putchar((n % 10)+ '0');
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
