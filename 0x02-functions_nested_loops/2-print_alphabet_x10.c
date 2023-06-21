#include "main.h"

/**
*print_alphabet_x10 - Printing letters of alphabet in lowecase 10 times
* Return: nothing
*/

void print_alphabet_x10(void)
{
int i;

for (i = 0; i <= 10; i++)
{

for (i = 97; i <= 122; i++)
{
_putchar(i);
}

}

_putchar('\n');
}
