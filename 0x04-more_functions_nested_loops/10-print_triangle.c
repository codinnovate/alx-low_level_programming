#include "main.h"

/**
 * print_triangle - prints a right-angled triangle of '#' characters
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
for (int row = 1; row <= size; row++)
{
for (int col = 1; col <= row; col++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
