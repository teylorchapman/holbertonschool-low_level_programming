#include<stdio.h>

/**
* main - print alphabet in upper and lower case letters
*
* Return: 0
*/
int main(void)
{
char z = 'a';
char cz = 'A';

while (z <= 'z')
{
putchar(z);
z++;
}
while (cz <= 'Z')
{
putchar(cz);
cz++;
}
putchar('\n');
return (0);
}
