#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints size of various datatypes'
 * Return: Always 0 (Success)
 */
int main(void)
{
int numb;
char chartype;
float floatType;
long longType;
long long int lli;
printf("Size of a char: %lu\n", sizeof(chartype));
printf("Size of an int: %lu\n", sizeof(numb));
printf("Size of a long int: %lu\n", sizeof(longType));
printf("Size of a long long int: %lu\n", sizeof(lli));
printf("Size of a float: %lu\n", sizeof(float));
return (0);
}
