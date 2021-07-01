#include "holberton.h"

/**
 * string_toupper - returns capitalised string
 * @s: pointer to the string
 * Return: capitalised word
 */

char *string_toupper(char *s)
{
	char *ptr = s;

	while (*s)
	{
		if (*s >= 97 && *s <= 122)
		{
			s * -= 32;
			*s++;
		}
	}
