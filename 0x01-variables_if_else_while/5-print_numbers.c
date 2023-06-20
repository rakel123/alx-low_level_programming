#include <stdio.h>

/**
* main - Entry point
* Description: printing numbers in base 10 from one to 10
* Return: always (0) for success
*/

int main(void)
{
int num;

for (num = 0; num <= 9; num++)
{
printf("%d", num);
}
printf("\n");
return (0);
}
