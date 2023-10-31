#include <stdio.h>
/**
 *main- a function for printing alphabet in lowercase except q and e
 *
 *return: always (0) for indicating success
 */
int main(void)
{
char x;
for (x = 'a'; x <= 'x'; x++)
{
if (x != 'q' && x != 'e')
{
putchar(x);
}
}
putchar('\n');
return(0);
}
