#include "holberton.h"

/**
 * swap_int - swaps two integer values using their memory
 * addresses
 * @a: pointer to integer a
 * @b: pointer to integer b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}
