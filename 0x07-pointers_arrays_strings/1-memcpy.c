#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: destination of the string
 * @src: source of string
 * @n: number bye copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
