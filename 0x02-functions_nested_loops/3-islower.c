#include "main.h"

/**
 * _islower - tests for lower case characters
 * in the following program
 * @c: character to test
 * Return: 1 if character is lowercase, 0 if not lowercas
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
