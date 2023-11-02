#include "main.h"
/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
int alt, anc;
if (size > 0)
{
for (alt = 0; alt < size; alt++)
{
for (anc = 0; anc < size; anc++)
_putchar('#');
if (alt == size - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
