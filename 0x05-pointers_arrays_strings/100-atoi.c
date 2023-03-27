#include "main.h"
#include <limits.h>
/**
 * _atoi - converts a string to an integer
 * @s: pointer to string to be converted
 *
 * Return: integer value of converted string
 */
int _atoi(char *s)
{
    int sign = 1;
    unsigned int num = 0;

    while (*s != '\0')
    {
        if (*s == '-')
        {
            sign *= -1;
        }
        else if (*s >= '0' && *s <= '9')
        {
            num = (num * 10) + (*s - '0');

            if (num > INT_MAX && sign == 1)
            {
                return INT_MAX;
            }
            else if (num > INT_MAX && sign == -1)
            {
                return INT_MIN;
            }
        }
        else if (num > 0)
        {
            break;
        }

        s++;
    }

    return sign * num;
}
