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
	float f;

	printf("size of an int: %lu\n", (unsigned long)sizeof(i));
	printf("Size of a long long int: %lu\n", (unsigned long)sizeof(d));
	printf("Size of a char: %lu\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu\n", (unsigned long)sizeof(f));
	return (0);
}
