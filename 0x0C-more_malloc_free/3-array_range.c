#include "holberton.h"
#include <stdio.h>

/**
 * array_range - creates array from @min to @max
 * @min: minimum value of int
 * @max: maximum value of int
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int length, i, *ptr;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		length = (max - min) + 1;
		ptr = malloc(sizeof(int) * length);
		if (!ptr)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < length; i++)
			{
				ptr[i] = min;
				min++;
			}
			return (ptr);
		}
	}
}
