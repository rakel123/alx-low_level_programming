#include "main.h"

/**
 * jack_bauer - displays time format of hh/mm foe 24 hours
 * hour: gives the hour to be displayed
 * minute: minutes to be displayed
 *Return: nothing
 */

void jack_bauer(void)
{
	for (int hour = 0; hour < 24; hour++)
	{
		for (int minute = 0; minute < 60; minute++)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n');
		}
	}
}
