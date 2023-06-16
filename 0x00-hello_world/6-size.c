#include <stdio.h>

/**
 * main - Entryw point
 * Description: C programm that prints various types on the computer
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	long int l;
	long long int j;
	char c;
	float f;

	printf("Size of a char: %lu byte(s)\n",(unsigned long)(sizeof(c)));
	printf("size of an int: %lu byte(s)\n", (unsigned long)(sizeof(i)));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)(sizeof(l)));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)(sizeof(j)));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)(sizeof(f)));

	return (0);
}

