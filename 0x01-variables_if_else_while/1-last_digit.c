#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int x;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (x > 5)
{
printf("Last digit of %d is %d and is greater than 5")
}
else  if (x == 0)
{
printf("Last digit of %d is %d and is 0")
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0")
}
return (0);
}
