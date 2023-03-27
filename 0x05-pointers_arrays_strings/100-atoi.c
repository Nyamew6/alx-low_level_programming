#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: pointer to string to be converted
 *
 * Return: integer value of converted string
 */
int _atoi(char *s)
{
        int sign = 1, num = 0, i = 0;

        while (s[i] != '\0')
        {
                if (s[i] == '-')
                        sign *= -1;
                if (s[i] >= '0' && s[i] <= '9')
                        num = num * 10 + (s[i] - '0');
                if (num != 0 && !(s[i] >= '0' && s[i] <= '9'))
                        break;
                i++;
        }

        if (sign == -1)
                num *= -1;

        return (num);
}
