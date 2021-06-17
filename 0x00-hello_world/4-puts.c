#include <stdio.h>
#include <string.h>
/**
 * main - entry point of the function
 * Description: Using puts function to print
 * to the standard output
 * Return: 0 (success)
 */

int main(void)
{
	char sentence[52];

	strcpy(sentence, "\"Programming is like building a multilingual puzzle");
	puts(sentence);
	return (0);
}
