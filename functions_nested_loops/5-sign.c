#include "main.h"
/**
 * print_sign - prints the sign of a number
 *@n: the number to be checked
 *
 *Return: 1 for positive, 0 for 0, and -1 for negative
 */
int print_sign(int n)
{
if (n > '0')
print_sign('+');
return (1);
if (n == '0')
print_sign('0');
return (0);
else
print_sign('-');
return (-1);
}
