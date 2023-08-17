#include "main.h"
/**
 * print_line - prints '_'
 * @n : gives length of char
 */
void print_line(int n)
{
if (n <= 0)
{
putchar('\n');
}
else
{
int a;

a = 1;
while (a <= n)
{
putchar('_');
a++;
}
}
putchar('\n');   
}

