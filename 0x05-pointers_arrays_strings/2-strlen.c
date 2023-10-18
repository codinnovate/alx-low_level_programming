/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to a string (an array of characters).
 *
 * Return: The length of the string (number of characters).
 */

int _strlen(char *s)
{
int length = 0;


while (s[length] != '\0')
{
length++;
}

return (length);
}
