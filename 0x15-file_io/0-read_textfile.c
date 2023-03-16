#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @fn: a pointer to the name of the file
 * @l: the number of letters the function should read and print
 * Return: 0 if the function fails or fn is NULL, otherwise
 * the actual number of bytes the function can read and print
*/

ssize_t read_textfile(const char *fn, size_t l)
{
ssize_t o, r, w;
char *buffer;

if (fn == NULL)
return (0);

buffer = malloc(sizeof(char) * l);
if (buffer ==  NULL)
return (0);

o = open(fn, O_RDONLY);
r = read(o, buffer, l);
w = write(STDOUT_FILENO, buffer, r);

if (o == -1 || r == -1 || w == -1 || w != r)
{
free(buffer);
return (0);
}
free(buffer);
close(o);
return (w);
}
