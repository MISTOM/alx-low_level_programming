/**
 * _strchr - searches and returns the first occourence of
 * the character
 * @s: string to be searched
 * @c: character to be found
 * Return: first occourance of the character
 */
#include <stddef.h>
char *_strchr(char *s, char c)
{
        while (*s)
        {
                if (*s == c)
                {
                        return (s);
                }
        s++;
        }
        if (!c)
        {
                return (s);
        }
        return (NULL);
}
