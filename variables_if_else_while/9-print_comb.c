#include <stdio.h>
/**
 * main - print a combination of numbers using putchar
 *
 * return: Always (success)
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
