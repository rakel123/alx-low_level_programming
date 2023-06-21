#include "main.h"

/**
 * _isalpha - tests charactert to see if its lowercase or uppercase
 * @c: character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase
 * 0 if c is not a letter, lowercae or uppercase
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);

	else

		return (0);
}

