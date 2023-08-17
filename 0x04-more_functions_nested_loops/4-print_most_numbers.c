#include "main.h"
/**
 * print_most_numbers - print number from 0 to 9 except 2 & 4
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int n;

for (n = 0; n < 10; n++)
{
if (n == 2 || n == 4)
{
continue;
}
_putchar(48 + n);
n++;
}
_putchar('\n');
}
