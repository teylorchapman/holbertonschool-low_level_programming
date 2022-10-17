#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * return: 1 if c is a digit, 0 if not
 */
int _isdigit(int c)
{
  if (c >= 48 && c <= 57)
    return (1);
  else
    return (0);
}
