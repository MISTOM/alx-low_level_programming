#include <stdio.h>
/**
 * main - Entry point to the function
 * Description: prints the fibonacci numbers
 * below 50
 * Return: 0 success
 */

int main(void)
{

	int i, nextterm, t1 = 0, t2 = 1;

	nextterm = t1 + t2;
	for (i = 0; i < 50; i++)
	{
		if (i == 49)
		{
			printf("%d\n", nextterm);
		}
		else
		{
			printf("%d, ", nextterm);
		}
		t1 = t2;
		t2 = nextterm;
		nextterm = t1 + t2;
	}
	return (0);
}
