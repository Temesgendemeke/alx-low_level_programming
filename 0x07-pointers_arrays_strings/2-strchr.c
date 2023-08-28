#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s : string
 * @c : char pointer
 * Return: string when c is found otherwise rerurns NULL.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
}

