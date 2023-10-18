#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - function used
 *
 *Return: Always 0(Success)
 */
int main(void)
{
char password[84];
int index = 0, sum = 0, diffHalf1, diffHalf2;
srand(time(0));
while (sum < 2772)
{
password[index] = 33 + rand() % 94;
sum += password[index++];
}
password[index] = '\0';
if (sum != 2772)
{
diffHalf1 = (sum - 2772) / 2;
diffHalf2 = (sum - 2772) / 2;
if ((sum - 2772) % 2 != 0)
diffHalf1++;
for (index = 0; password[index]; index++)
{
if (password[index] >= (33 + diffHalf1))
{
password[index] -= diffHalf1;
break;
}
}
for (index = 0; password[index]; index++)
{
if (password[index] >= (33 + diffHalf2))
{
password[index] -= diffHalf2;
break;
}
}
}
printf("%s", password);
return (0);
}
