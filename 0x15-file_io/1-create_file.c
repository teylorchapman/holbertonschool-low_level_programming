#include "main.h"

/**
 * create_file - creates a file
 * @fn: a pointer to the name of the file to create
 * @tc: a pointer to a string to write to the file
 * Return: -1 if the function fails, otherwise 1
*/

int create_file(const char *fn, char *tc)
{
int o, w, len = 0;

if (fn == NULL)
return (-1);

if (tc != NULL)
{
for (len = 0; tc[len];)
len++;
}

o = open(fn, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(o, tc, len);

if (o == -1 || w == -1)
return (-1);

close(o);

return (1);
}
