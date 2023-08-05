#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: The string to be searched
 * @c: The character to be located
 * Return: If c is food - pointer to the first occurence
 * if c is not found - MULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
