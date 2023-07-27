#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverse array of integers
 * @a: Input value
 * @n: number of element of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
