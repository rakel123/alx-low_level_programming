#include "main.h"

/**
 * _islower - checks for lower case characters
 * in the following program
 * @c: defines character
 * Return: 1 if character is lowercase, 0 if not lowercas
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar(c);
		return (1);
	}

	else
	{
		return (0);
	}
}
