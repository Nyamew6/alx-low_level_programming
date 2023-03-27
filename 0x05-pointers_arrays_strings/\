#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the string, or 0 if there are no numbers
 */
int _atoi(char *s)
{
        int sign = 1;
        int result = 0;

        /* Skip any leading whitespace */
        while (*s == ' ')
                s++;

        /* Check for sign */
        if (*s == '-')
                sign = -1;

        if (*s == '+' || *s == '-')
                s++;

        /* Process each digit */
        while (*s >= '0' && *s <= '9') {
                result = result * 10 + (*s - '0');
                s++;
        }

        return sign * result;
}
