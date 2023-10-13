#include "main.h"

/**
 * print_diagonal - prints a diagonal line of '\' characters
 * @n: number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
int spaces = 0;
int slashes;

if (n <= 0)
{
_putchar('\n');
}
else
{
while (spaces < n)
{
for (slashes = 0; slashes < spaces; slashes++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
spaces++;
}
}
}
