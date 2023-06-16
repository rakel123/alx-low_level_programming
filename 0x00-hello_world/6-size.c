#include <stdio.h>

/**
 * main - Entryw point
 * Description: C programm that prints various types on the computer
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	double d;
	char c;

	printf("size of an int: %lu\n", (unsigned long)sizeof(i));
	printf("Size of a long long int: %lu\n", (unsigned long)sizeof(d));
	printf("The size of a char: %lu\n", (unsigned long)sizeof(c));
	return (0);
}
