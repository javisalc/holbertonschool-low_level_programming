#include <stdio.h>
/**
 *main - a funtion for printing the entire alphabet
 *       in lowcase
 *
 *Return: always 0 for succes
 */
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
putchar(x);
putchar ('\n');
return (0);
}
