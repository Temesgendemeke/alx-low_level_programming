#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src : source
 * Return: the length of the string
 */
char *_strcat(char *dest, char *src)
{
int i, j = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[j] != '\0' && i < 97)
{
dest[i] = src[j];
i++;
j++;

}

dest[i] = '\0';
return (dest);
}
