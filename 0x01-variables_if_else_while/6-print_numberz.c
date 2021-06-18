#include <stdio.h>

/**
 * main - entry point for the program
 * Description: Print numbers ascending
 * using putchar
 * to the standard output
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
