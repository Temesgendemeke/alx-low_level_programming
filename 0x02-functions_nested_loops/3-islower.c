#include <stdio.h>
#include <ctype.h>
/** 
 * _isalpha - check if char is lowercase
 * @c : is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _isalpha(int c)
{

if (islower(c) > 0)
{
return (1);
}
else
{
return (0);
}

}
