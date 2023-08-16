#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
int n = 0;

while (n < 10)
{

char h;

for (h = 'a'; h <= 'z'; h++)
{
_putchar(h);
}
_putchar('\n');
n++;
}
}
