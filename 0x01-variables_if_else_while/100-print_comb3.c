#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function that prints all combinations of two digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/*prints tens digit*/
	{
		for (ones = '0'; ones <= '9'; ones++)/*prints ones digit*/
		{
			if (!((ones == tens) || (tens > ones)))/*elimanate repitition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/*addes comma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
