#include "main.h"
/**
 * print_sign - checks for alphabetic character
 * @n : the integer to be checked
 * Return: 1 if n is a +ve, 0 if n is 0,
 * -1 if n is -ve
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
}
