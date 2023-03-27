/**

main - generates random valid passwords for 101-crackme
Return: Always 0
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int sum = 0, r;
char c;
    srand(time(0));

    while (sum < 2772)
    {
            r = rand() % 3;
            if (r == 0)
                    c = '0' + rand() % 10;
            else if (r == 1)
                    c = 'a' + rand() % 26;
            else
                    c = 'A' + rand() % 26;
            putchar(c);
            sum += c;
    }
    if (sum != 2772)
    {
            c = 2772 - sum;
            if (c > '9' && c < 'a')
                    c += 7;
            else if (c > 'Z')
                    c += 6;
            putchar(c);
    }
    return (0);
}
