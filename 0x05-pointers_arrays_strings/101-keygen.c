#include <stdio.h>
/**

main - Generates random valid passwords for the program 101-crackme.

Return: Always 0.
*/
int main(void)
{
char password[84];
int i = 0, sum = 0, diff_half1, diff_half2;

srand(time(NULL));

while (sum < 2772)
{
password[i] = rand() % 94 + 33;
sum += password[i++];
}

diff_half1 = (sum - 2772) / 2;
diff_half2 = (sum - 2772) / 2 + (sum - 2772) % 2;

i = 0;
while (password[i])
{
if (password[i] <= diff_half1)
{
password[i] += diff_half2;
}
else if (password[i] <= diff_half1 + diff_half2)
{
password[i] -= diff_half1;
}
putchar(password[i++]);
}

return (0);
}
