#include "main.h"
/**
* _isalpha(int c)- checks for lowercase or uppercase
* @a: The character to check
* Return: 1 (success)
*/
int _isalpha(int a)
{
if ((a < 'z' && a > 'a') || (a < 'z' && a > 'A'))
return (1);
else
return (0);
}
