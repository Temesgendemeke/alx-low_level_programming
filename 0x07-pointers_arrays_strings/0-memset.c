#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer that hold string
 * @b : char value to be filed
 * @n: size of bye to be filed
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
}
