#include <stdio.h>
/**
 * main - Print the alphabet in lower case and uppercase
 *
 * return: Always 0 for success
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (letter = 'A'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
  
