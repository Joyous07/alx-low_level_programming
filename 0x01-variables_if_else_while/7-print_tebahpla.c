#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function that print alphabets in a reverse order
 *
 * Retrun: Always 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	
	putchar('\n');
	return (0);
}
