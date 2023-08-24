#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src : source
 * Return: the length of the string
 */
char *_strcat(char *dest, char *src)
{
char* ptr = dest;
while (*ptr != '\0') {
ptr++;
}
while (*src != '\0') {
*ptr = *src;
ptr++;
src++;
}
*ptr = '\0';
}
