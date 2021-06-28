#include "holberton.h"

/**
 * _strlen - returns the length of the string
 * @s: pointer to the string passed
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		*s++;
	}
	return (len);
}
