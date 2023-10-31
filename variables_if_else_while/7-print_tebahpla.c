#include <stdio.h>
/**
 * main - prints alphabet in reverse
 *
 * Return: Always (success)
 */
int main(void)
{
char b;
for (b = 'a'; b >= 'z'; b--)
{
putchar(b);
}
putchar('\n');
return (0);
}
