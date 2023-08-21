#include "main.h"
/**
 * print_rev - reverse the string
 * @s: string to evaluate
 * Return: the length of the string
 */
void print_rev(char *s)
{
int i;

while (s[i] != '\0')
{
i++;
}

int j; 

j = i - 1;

while (s[j] != '\0')
{
_putchar(s[j]);
j--;
}
_putchar('\n');
}
