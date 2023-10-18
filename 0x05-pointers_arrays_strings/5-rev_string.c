#include "main.h" // Include your main.h file that defines _putchar

/**
 * rev_string - Reverses a string in-place.
 * @s: A pointer to the string to be reversed.
 */
void rev_string(char *s)
{
int length = 0;
char temp;
int i, j;

while (s[length] != '\0')
{
length++;
}

for (i = 0, j = length - 1; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}

for (i = 0; i < length; i++)
{
_putchar(s[i]);
}
}
