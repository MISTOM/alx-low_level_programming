#include <stdio.h>

/**
 * main - entry point for the program
 * Description: Print numbers using putchar
 * to the std output
 * Return: 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
