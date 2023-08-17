#include "main.h"
/**
 * print_line - prints '_'
 * @n : gives length of char
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int a;

a = 1;
while (a <= n)
{
_putchar('_');
a++;
}
_putcher('\n');
}
}
