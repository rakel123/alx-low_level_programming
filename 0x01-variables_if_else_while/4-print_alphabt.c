#include <stdio.h>

/**
 * main - Entry point
 * Description: printing Alphabet letters and excluding q ane e
 * Return: always (0) success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');
return (0);
}
