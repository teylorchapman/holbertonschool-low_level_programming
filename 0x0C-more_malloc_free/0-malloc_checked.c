#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*malloc_checked - entry point
*@b: input amount
*return: pointer to new mem
*/
void *malloc_checked(unsigned int b)
{
void *n = malloc(b);
if (n == NULL)
{
free(n);
exit(98);
}
return (n);
}
