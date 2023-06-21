#include "main.h"

/**
 * _abs - checks if the number n is positive or negative
 *@i: tests the number to be checked
 *Return: -i if number is less than 0, i if number is positive
 */

int _abs(int i)
	{
		if (i < 0)
		{
			return (-i);
		}

		else
		{
			return (i);
		}
	}
