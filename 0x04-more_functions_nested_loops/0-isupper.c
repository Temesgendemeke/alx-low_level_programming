#include "main.h"
/**
 * _isupper -  checks for uppercase character.
 * @c : char to be checked.
 * Return: 1 when the char is uppercase otherwise returns 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
