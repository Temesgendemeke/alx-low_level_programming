#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int conv = 0;
	int num = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		else if (b[i] == '1')
		{
			conv += num;
		}
		num *= 2;
	}
	return (conv);
}
