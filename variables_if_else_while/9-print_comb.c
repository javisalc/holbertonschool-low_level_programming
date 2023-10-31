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
putchar(i);
putchar(f);
if ((i != '9') || (i == '9' && f !=9))
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
