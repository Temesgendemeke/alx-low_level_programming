#include <stdio.h>
/**
 * _strcpy - returns the length of a string
 * @dest :  destination
 * @src : source
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
char *ptr = dest;
while (*src != '\0')
{
*ptr = *src;
src++;
ptr++;
}
*ptr = '\0';
return (dest);
}
