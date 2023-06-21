#include "main.h"

/**
 * _abs - checks if the number n is positive or negative
 *@n: tests the number to be checked
 *Return: -n if number is less than 0, n if number is positive 
 */

int _abs(int i)
	{
		if (i < 0)
		{
			return -i;
		}

		else 
		{
			return i;
		}
	}
