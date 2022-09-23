#include "main.h"
/**
*main - prints alphabet a-z
*
*return = always 0.
*/
void print_alphabet(void)
{
char alpha;
alpha = 'a';
while (alpha <= 'z')
{
_printchar(alpha);
alpha++;
}
_putchar_('\n');
}
