#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: string to evaluate
 * Return: length of the string
 */
void _puts(char *str)
{
char str[] = "temu";
int i = 0;

while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
return (i);
}
