#include <stdio.h>
/**
 * main - Print posible combinations of one digit numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
int i, f;
i = f = '0';
for (i = '0'; i <= '9'; i++)
{
for (f = '0'; f <= '9'; f++)
{
if (i < f)
{
putchar(i);
putchar(f);
if ((i != '8') || (i == '8' && f != '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n')
return (0);
}
