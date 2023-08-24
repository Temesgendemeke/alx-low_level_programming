#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: string to evaluate
 * @src : source to be copied
 * @n : number of char to be copied
 * Return: copied string
 */
char *_strncpy(char *dest, const char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
