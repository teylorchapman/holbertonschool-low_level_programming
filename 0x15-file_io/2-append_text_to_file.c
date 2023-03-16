#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @fn: a pointer to the name of the file
 * @tc: the string to add to the end of the file
 * Return: -1 if the function fails or fn is NULL or the file
 * does not exist and the user lacks write permissions, otherwise 1
*/

int append_text_to_file(const char *fn, char *tc)
{
int o, w, len = 0;
if (fn == NULL)
return (-1);

if (tc != NULL)
{
for (len = 0, tc[len];)
len++;
}
o = open(fn, O_WRONLY | O_APPEND);
w = write(o, tc, len);
if (o == -1 || w == -1)
return (-1);
close(0);
return (1);
}
