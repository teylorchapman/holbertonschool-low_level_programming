#include "main.h"
/**
*print_last_digit - Print the last Digit of INT n
* And return its value
* *@n: Digit to take the last digit of
* Return: Last digit of N
*/
int print_last_digit(int n)
{
int o = n % 10;
if (o < 0)
o *= -1;
_putchar('0' + o);
return (o);
}
