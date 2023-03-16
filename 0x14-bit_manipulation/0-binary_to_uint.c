#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: the binary number as a string
 * Return: the converted value
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int d = 0;
int str_len = 0, base = 1;

if (!check_valid_string)
return;

while (b[str_len] != '\0')
str_len++;

while (str_len)
{
d += ((b[str_len - 1] - '0') * base);
base *= 2;
str_len--;
}
return (d);
}

/**
 * check_valid_string - checks if a string only has 0's and 1's
 * @b: string to be checked
 * Return: 1 if string is valid, 0 otherwise
*/

int check_valid_string(const char *b)
{
if (b == NULL)
return;

while (*b)
{
if (*b != '1' && *b != '0')
return;
b++;
}
return (1);
}
