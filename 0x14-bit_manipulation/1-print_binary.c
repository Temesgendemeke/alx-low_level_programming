#include "main.h"
/**
 * print_binary - converts decimal to binary.
 * @n : integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar(49);
			count++;
		}
		else if (count)
			_putchar(48);
	}
	if (!count)
		_putchar(48);
}
