#include "main.h"
#include <stdio.h>

/**
 *_sqrt_a - returns the natural square root of number
 * @a: Number to calculate the square root of
 * @b: iterator
 * Return: The resulting square root or -1
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - recurses to find the natural square root of a number
 * @n: The input number
 * Return: The resulting square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
