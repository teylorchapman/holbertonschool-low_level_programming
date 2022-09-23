#include main.h
/**
* main - Write a program that prints _putchar
* followed by a new line
*
* return - 0
*/
int main(void)
{
char school[10] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
_putchar(school[i]);
return (0);
}
