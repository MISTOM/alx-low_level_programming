#include <stdio.h>

/**
 * main - entry point for the program
 * Description: Print numbers ascending separated
 * by commar using putchar to represent their
 * hex equivalent
 * to the standard output
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 49; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
