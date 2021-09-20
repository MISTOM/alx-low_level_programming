/**
 * _puts - prints a string followed by  new line to stdout
 * @str: string to be rinted
 *
 */
#include "main.h"
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
