#include <stdio.h>
/**
 *main - prints single digit number
 *
 *Return: Always (succsess)
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
