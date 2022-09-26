#include "main.h"
/**
* print_triangle - prints a triangle in the terminal
* @size: size of the triangle
*/
void print_triangle(int size)
{
int height, width;
if (size <= 0)
_putchar('\n');
for (height = 0; height < size; height++)
{
for (width = size - height - 1; width > 0; width--)
_putchar(' ');
for (width = height + 1; width > 0; width--)
_putchar('#');
_putchar('\n');
}
}
