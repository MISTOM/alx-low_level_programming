/**
 * _strlen - returns the length of a string
 * @str: string
 * Return: return the length
 */
int _strlen(char *str)
{
int length = 0;

while (*str)
{
str++;
length++;
}
return (length);
}
