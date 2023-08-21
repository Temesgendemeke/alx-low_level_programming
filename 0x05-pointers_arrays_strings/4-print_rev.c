#include "main.h"
/**
 * print_rev - reverse the string
 * @s: string to evaluate
 * Return: the length of the string
 */
void print_rev(char *s)
{
int i , j;

while (s[i] != '\0')
{
i++;
}

j = i - 1;

while (s[j] != '\0')
{
_putchar(s[j]);
j--;
}
_putchar('\n');
}
