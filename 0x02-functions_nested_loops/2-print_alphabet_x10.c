#include "main.h"
/**
  * main - Entry point
  *
  * Description: 'prints string with newline'
  * Return: Always 0 (Success)
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
