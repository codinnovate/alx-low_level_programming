#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char generateRandomChar()
{
int index;
char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
index = rand() % 62;
return charset[index];
}

void generateRandomPassword(int length)
{
int i;
for (i = 0; i < length; i++)
{
char randomChar = generateRandomChar();
putchar(randomChar);
}
putchar('\n');
}

int main()
{
srand(time(NULL));
int passwordLength = 12;
generateRandomPassword(passwordLength);

return (0);
}
