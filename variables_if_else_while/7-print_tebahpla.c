#include <stdio.h>
/**
 * main - prints alphabet in reverse
 *
 * Return: Always (success)
 */
int main(void)
{
char l;
for (l = 'a'; l >= 'z'; l--)
{
putchar(l);
}
putchar('\n');
return (0);
}
