#include <stdio.h>
/**
 *main - Print hexadecimal numbers
 *
 *Return: Alway (Success)
 */
int main(void)
{
char h;
for (h = '0'; h <= '9'; h++)
{
putchar(h);
}
for (h = 'a'; h <= 'f', h++)
{
putchar(h);
}
putchar('\n');
return (0);
}
