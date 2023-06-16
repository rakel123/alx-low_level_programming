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

	printf("Size of a char: %lu\n", (sizeof(c));
	printf("size of an int: %lu\n", (sizeof(i));
	printf("Size of a long int: %lu\n", (sizeof(l));
	printf("Size of a long long int: %lu\n", (sizeof(j));
	printf("Size of a float: %lu\n", (sizeof(f));
}
return (0);
