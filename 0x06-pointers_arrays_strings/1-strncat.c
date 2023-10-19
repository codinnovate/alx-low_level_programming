#include "main.h"

/**
 * _strncat - concantenates two strinfs using at most
 * an inputted numbr off bytes from src.
 * @dest: The strinf to be appended upon
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src ti be appended to dest.
 * Return: Apointer to the resulting sstring dest
 */

char *_strcat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}