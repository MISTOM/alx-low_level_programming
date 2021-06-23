#include <stdio.h>
/**
 * main - Entry point to the program
 * Description: finds the sum of the even-valued
 * fibonacci numbers below 4million
 * Return: 0 success
 */
int main(void)
{
	int i;
	long t1 = 0, t2 = 1, nextterm = t1 + t2, evenSum = 0;

	for (i = 0; i < 4000000; i++)
	{
		if (nextterm % 2 == 0)
		{
			evenSum += nextterm;
		}
		t1 = t2;
		t2 = nextterm;
		nextterm = t1 + t2;
	}
	printf("%lu\n", evenSum);
	return (0);
}
