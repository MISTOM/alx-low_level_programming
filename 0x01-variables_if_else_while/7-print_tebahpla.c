#include <stdio.h>

/**
 * main - entry point for the program
 * Description: Print lowercase alphabets
 * in reverse to the standard output
 * Return: 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
