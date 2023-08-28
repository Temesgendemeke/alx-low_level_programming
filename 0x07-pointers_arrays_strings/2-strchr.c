#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s : string
 * @c : char pointer
 * Return: string when c is found otherwise rerurns NULL.
 */
char *_strchr(char *s, char c)
{
int i ;
while (1)
{
a = *s++;
if (i == c)
{
return (s - 1);
}
else if (i == 0)
{
return (NULL);
}
}
}

