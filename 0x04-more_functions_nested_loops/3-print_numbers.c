#include "main.h"
/**
 * print_numbers - prints 0 to 9
 * Return: Always 0.
 */
void print_numbers(void)
{
int n;
n = 0;
while (n <= 9)
{
_putchar(48 + n);
n++;
}
_putchar('\n');
return (0);
}
