#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function that print digit number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		printf("%d", num);
		num += 1;
	}
	printf("\n");
	return (0);
}
