#include "main.h"

/**
 * print_alphabet_x10 - a function that Prints 10times  the alphabet,
 * in lowercase, followed by a new line
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int n = 10;
for (int i = 0; i <= n; i++)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
_putchar('\n');
}
}
}
