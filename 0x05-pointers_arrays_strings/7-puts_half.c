#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: A pointer to the string to be printed.
 */
void puts_half(char *str)
{
int length = 0;
int i, start_index;

while (str[length] != '\0')
{
length++;
}

start_index = (length + 1) / 2;

for (i = start_index; str[i] != '\0'; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
