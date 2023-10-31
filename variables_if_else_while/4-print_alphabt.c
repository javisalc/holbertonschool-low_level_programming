#include <stdio.h>
/**
 * main - Function for printing alphabet in lowercase except q and e
 *
 * Return: Always (Success)
 */
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
if (x != 'q' && x != 'e')
{
putchar(x);
}
}
putchar('\n');
return (0);
}
