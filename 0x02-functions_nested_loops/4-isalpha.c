#include "main.h"
/**
 * _isalpha - check if char is alphabet
 * @c: is the char to be checked
 * Return: 1 if char is letter, otherwise 0.
 */
int _isalpha(int c)
{

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);

}
