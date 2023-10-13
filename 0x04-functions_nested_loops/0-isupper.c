#include "main.h"

/**
 * _isupper - A function that checks for uppercase character
 * @c : the character to be checked
 * Return: _isupper returns 1 if @c is uppercase
 * then returns 0 otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
