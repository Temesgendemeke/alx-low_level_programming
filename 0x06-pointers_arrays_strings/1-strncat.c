#include "main.h"
/**
 * *_strncat - function that concatenates two strings.
 * @dest : destination string
 * @src : the source string to the destination string.
 * @n : maximum number of characters to be concatenated
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
while (*ptr != '\0')
{
ptr++;
}
while (*src != '\0' && n--)
{
*ptr = *src;
ptr++;
src++;
}
*ptr = '\0';
return (dest);
}
