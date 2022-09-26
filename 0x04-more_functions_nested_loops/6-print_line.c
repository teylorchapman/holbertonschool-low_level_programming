#include "main.h"
/**
* print_line - draws a straight line in the terminal
* @n: number of times "_" should be written
*/
void print_line(int n)
{
int times = n;
for (times = n; times > 0; times--)
_putchar('_');
_putchar('\n');
}
