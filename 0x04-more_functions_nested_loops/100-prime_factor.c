#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Find and print the largest prime factor of a given number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long long num = 612852475143;
long long largestPrimeFactor = -1;

while (num % 2 == 0)
{
largestPrimeFactor = 2;
num /= 2;
}

for (long long i = 3; i <= sqrt(num); i += 2)
{
while (num % i == 0)
{
largestPrimeFactor = i;
num /= i;
}
}

if (num > 2)
{
largestPrimeFactor = num;
}

printf("%lld\n", largestPrimeFactor);
return (0);
}
