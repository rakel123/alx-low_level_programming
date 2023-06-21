#include "main.h"

/**
 * _islower - checks for lower case characters
 * in the following program
 * @c: defines character
 * Returns: retuns 1 if lowercase or 0 otherwise
 */
int _islower(int c)
{	
	if (c >= 'a' && c <= 'z')
	{
		_putchar(c);
		return 1;
	}

	else { return (0);}
}
