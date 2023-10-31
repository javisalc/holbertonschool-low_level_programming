#include <stdio.h>
/**
 *main - a funtion for printing the entire alphabet
 *       in lowcase
 *
 *Return: always 0 for succes
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
return (0);
}
