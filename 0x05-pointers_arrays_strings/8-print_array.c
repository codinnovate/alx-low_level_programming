#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers followed by a new line.
 * @a: A pointer to the array of integers.
 * @n: The number of elements to be printed.
 */

void print_array(int *a, int n)
{
if (n > 0)
{
for (int i = 0; i < n; i++)
{
if (i < n - 1)
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
printf("\n");
}
}
