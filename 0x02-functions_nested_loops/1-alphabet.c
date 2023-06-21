#include "main.h"

/**
 * print_alphabet - Printing letters of alphabet in lowecase
 * Return: nothing
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
