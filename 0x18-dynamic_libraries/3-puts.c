#include "main.h"
/**
 * _puts - prints string
 * @str: string
 */
void _puts(char *str)
{
int i = 0;
while (str != NULL)
{
_putchar(str[i]);
str++;
i++;
}
_putchar('\n');
}
