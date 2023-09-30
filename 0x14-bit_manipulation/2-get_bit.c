#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer
 * @index: index
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	while (index > 0)
	{
		n /= 2;
		index--;
	}
	if (n % 2 == 0)
		return (0);
	return (1);
}
