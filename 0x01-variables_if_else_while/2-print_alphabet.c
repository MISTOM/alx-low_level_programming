#include <stdio.h>

/**
 * main - entry point for the program
 * Description: Print lowercase alphabets
 * to the standard output
 * Return: 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
