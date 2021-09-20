/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string to be compared
 * Return: 0 if true
 */

int _strcmp(char *s1, char *s2)
{
        int same = 0;

        while (*s1)
        {
                if (*s1 != *s2)
                {
                        same = ((int) *s1 - 48) - ((int) *s2 - 48);
                        break;
                }
                s1++;
                s2++;
        }
        return (same);
}
